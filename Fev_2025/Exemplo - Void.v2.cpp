#include <iostream>

using namespace std;

void menu() {
    cout << "Digite o periodo do dia: \n";
    cout << "1. Manhã \n";
    cout << "2. Tarde \n";
    cout << "3. Noite \n";
}

void boas_vindas() {
    int opcao;
    
    cin >> opcao;
    
    if (opcao == 1) {
        cout << "Bom dia!\n";
    } else if (opcao == 2) {
        cout << "Boa tarde!\n";
    } else if (opcao == 3) {
        cout << "Boa noite!\n";
    } else {
        cout << "Opção inválida.\n";
    }
}

int main() {
    menu();         
    boas_vindas(); 
    
    cout << "O programa foi encerrado.\n";
    return 0;
}
