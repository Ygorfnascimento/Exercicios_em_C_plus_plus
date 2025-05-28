#include <iostream>
#include <string>
#include <set>
#include <random>
#include <algorithm>
#include <iomanip>
#include <cctype>

using namespace std;

// Verifica se o nome contém apenas letras do alfabeto (sem acentos ou espaços)
bool validarNome(const string& nome) {
    return all_of(nome.begin(), nome.end(), [](char c) {
        return isalpha(c) && isascii(c);
    });
}

string baseDoNome(const string& nome) {
    string base;
    for (char c : nome) {
        if (isalpha(c)) base += tolower(c);
    }
    return base;
}

// Verifica se a senha está dentro da lista de senhas fracas
bool senhaFraca(const string& senha) {
    static const set<string> fracas = {
        "123456", "password", "123456789", "12345", "1234", "qwerty",
        "abc123", "letmein", "welcome", "admin"
    };
    return fracas.count(senha);
}

// Gera uma nova senha aleatória garantindo variedade mínima (letra maiúscula, minúscula, número, símbolo)
string novaSenha(int tamanho, set<string>& usadas, mt19937& gen) {
    const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_+=<>?";
    uniform_int_distribution<> dist(0, chars.size() - 1);

    string senha;
    do {
        senha.clear();
        senha += chars[uniform_int_distribution<>(0, 25)(gen)];  // 1 letra maiúscula
        senha += chars[uniform_int_distribution<>(26, 51)(gen)]; // 1 letra minúscula
        senha += chars[uniform_int_distribution<>(52, 61)(gen)]; // 1 número
        senha += chars[uniform_int_distribution<>(62, chars.size() - 1)(gen)]; // 1 símbolo

        while (senha.size() < tamanho)
            senha += chars[dist(gen)];

    } while (senhaFraca(senha) || usadas.count(senha));

    usadas.insert(senha);
    return senha;
}

// Gera um e-mail único com base no nome, número aleatório e domínio
string gerarEmail(const string& baseNome, set<string>& usados, mt19937& gen, uniform_int_distribution<>& distNum, const char* dominios[], int qtdDominios) {
    string email;
    uniform_int_distribution<> distDom(0, qtdDominios - 1);
    do {
        email = baseNome + to_string(distNum(gen)) + dominios[distDom(gen)];
    } while (usados.count(email));
    usados.insert(email);
    return email;
}

int main() {
    string nome;
    int qtdEmails, tamSenha;

    // Entrada e validação do nome
    cout << "👤  Digite seu nome e sobrenome (sem acento/espaco): ";
    while (getline(cin, nome), !validarNome(nome)) {
        cout << "❌  Nome inválido. Tente novamente: ";
    }

    // Entrada e validação da quantidade de e-mails
    cout << "📧  Quantos e-mails deseja gerar? ";
    while (!(cin >> qtdEmails) || qtdEmails <= 0) {
        cout << "❌  Valor inválido. Digite um número positivo: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    // Entrada e validação do tamanho da senha
    cout << "🔐  Tamanho da senha (mínimo 6): ";
    while (!(cin >> tamSenha) || tamSenha < 6) {
        cout << "❌  Valor inválido. Tente novamente: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cin.ignore(); 
    set<string> emailsGerados;
    set<string> senhasUsadas;
    string base = baseDoNome(nome);

    // Inicialização do gerador de números aleatórios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distNum(0, 9999);
    const char* dominios[] = {
        "@gmail.com", "@outlook.com", "@hotmail.com",
        "@yahoo.com", "@live.com", "@mail.com", "@icloud.com"
    };

    vector<pair<string, string>> lista;

    // Geração inicial de e-mails e senhas
    for (int i = 0; i < qtdEmails; ++i) {
        string email = gerarEmail(base, emailsGerados, gen, distNum, dominios, 7);
        string senha = novaSenha(tamSenha, senhasUsadas, gen);
        lista.emplace_back(email, senha);
    }

    int opcao;
    do {
        cout << "\n📨  E-mails e senhas geradas:\n";
        cout << left << setw(30) << "E-mail" << "|" << "Senha\n";
        cout << string(45, '-') << "\n";
        for (const auto& par : lista)
            cout << left << setw(30) << par.first << " | " << par.second << '\n';

        cout << "\n========== 📝  Menu ============= \n";
        cout << "1️⃣  Refazer senhas\n";
        cout << "2️⃣  Encerrar programa\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1) {
            cout << "\n🔄  Novas senhas geradas:\n";
            senhasUsadas.clear();  // Limpa senhas anteriores para permitir novas exclusivas
            for (auto& par : lista) {
                par.second = novaSenha(tamSenha, senhasUsadas, gen);
            }
        } else if (opcao != 2) {
            cout << "❌  Opção inválida. Tente novamente.\n";
        }

    } while (opcao != 2);

    cout << "\n✔  Programa finalizado com sucesso.\n";
    return 0;
}
