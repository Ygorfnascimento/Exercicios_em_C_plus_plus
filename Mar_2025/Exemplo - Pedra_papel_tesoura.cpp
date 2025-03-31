#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int opcao;
    int escolha_computador;
    
    srand(time(0));

    cout << "Escolha uma opção: \n";
    cout << "0. Sair \n";
    cout << "1. Papel \n";
    cout << "2. Pedra \n";
    cout << "3. Tesoura \n";
    cin >> opcao;
    
    if (opcao == 0) {
        cout << "Saindo do jogo...\n";
        return 0;
    }

    escolha_computador = rand() % 3 + 1;

    cout << "Você escolheu: ";
    switch(opcao) {
        case 1: cout << "Papel\n"; break;
        case 2: cout << "Pedra\n"; break;
        case 3: cout << "Tesoura\n"; break;
        default: cout << "Opção inválida.\n"; return 0;
    }

    cout << "O computador escolheu: ";
    switch(escolha_computador) {
        case 1: cout << "Papel\n"; break;
        case 2: cout << "Pedra\n"; break;
        case 3: cout << "Tesoura\n"; break;
    }

    if (opcao == escolha_computador) {
        cout << "Empate!\n";
    } else if ((opcao == 1 && escolha_computador == 2) || (opcao == 2 && escolha_computador == 3) || (opcao == 3 && escolha_computador == 1)) {
        cout << "Você ganhou!\n";
    } else {
        cout << "Você perdeu. \n";
    }

    return 0;
}