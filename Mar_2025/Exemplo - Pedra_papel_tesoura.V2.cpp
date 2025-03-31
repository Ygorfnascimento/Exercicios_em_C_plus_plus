#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int gerar_escolha_computador() {
    return rand() % 3; // Gera um número aleatório de 0 a 2 (0 - Pedra, 1 - Papel, 2 - Tesoura)
}

string escolha_para_string(int escolha) {
    if (escolha == 0) return "Pedra";
    if (escolha == 1) return "Papel";
    return "Tesoura";
}

int main() {
    srand(time(0)); // Gerador de números aleatórios
    
    char opcao;
    int vitorias_usuario = 0, vitorias_computador = 0;
    
    do {
        int escolha_usuario, escolha_computador;
        
        // Usuário escolhe Pedra (0), Papel (1) ou Tesoura (2)
        cout << "Escolha: 0 - Pedra, 1 - Papel, 2 - Tesoura: ";
        cin >> escolha_usuario;
        
        // Computador escolhe Pedra (0), Papel (1) ou Tesoura (2)
        escolha_computador = gerar_escolha_computador();
        
        cout << "Úsuario escolheu: " << escolha_para_string(escolha_usuario) << endl;
        cout << "Computador escolheu: " << escolha_para_string(escolha_computador) << endl;
        
        // Verifica quem ganhou
        if (escolha_usuario == escolha_computador) {
            cout << "Deu empate!" << endl;
        } else if ((escolha_usuario == 0 && escolha_computador == 2) ||
                   (escolha_usuario == 1 && escolha_computador == 0) ||
                   (escolha_usuario == 2 && escolha_computador == 1)) {
            cout << "Você venceu!" << endl;
            vitorias_usuario++;
        } else {
            cout << "O computador venceu!" << endl;
            vitorias_computador++;
        }
        
        // Mostra o placar geral
        cout << "Placar: Úsuario " << vitorias_usuario << " X " << vitorias_computador << " Computador" << endl;
        
        // Pergunta se o úsuario quer jogar novamente
        cout << "Deseja jogar novamente? (s/n): ";
        cin >> opcao;
    } while (opcao == 's' || opcao == 'S');
    
    return 0;
}