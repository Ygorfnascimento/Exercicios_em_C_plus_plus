#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int gerar_numero_aleatorio() {
    return rand() % 11; // Número de 0 a 10
}

int main() {
    srand(time(0)); // Gerador de números aleatórios
    
    char opcao;
    int vitorias_usuario = 0, vitorias_computador = 0;
    
    do {
        int escolha_usuario, numero_usuario, numero_computador, soma;
        
        // Usuário escolhe par (0) ou ímpar (1)
        cout << "Escolha 0 para par ou 1 para ímpar: ";
        cin >> escolha_usuario;
        
        // Usuário digita um número
        cout << "Digite um número de 0 a 10: ";
        cin >> numero_usuario;
        
        // Computador gera um número aleatório
        numero_computador = gerar_numero_aleatorio();
        
        // Soma os dois valores
        soma = numero_usuario + numero_computador;
        
        cout << "Número do computador: " << numero_computador << endl;
        cout << "Soma dos valores: " << soma << endl;
        
        // Verifica quem ganhou
        if ((soma % 2 == 0 && escolha_usuario == 0) || (soma % 2 != 0 && escolha_usuario == 1)) {
            cout << "Voce venceu!" << endl;
            vitorias_usuario++;
        } else {
            cout << "O computador venceu!" << endl;
            vitorias_computador++;
        }
        
        // Mostra placar geral
        cout << "Placar: Úsuario " << vitorias_usuario << " X " << vitorias_computador << " Computador" << endl;
        
        // Pergunta se o úsuario quer jogar novamente
        cout << "Deseja jogar novamente? (s/n): ";
        cin >> opcao;
    } while (opcao == 's' || opcao == 'S');
    
    return 0;
}