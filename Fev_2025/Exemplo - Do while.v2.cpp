#include <iostream>

using namespace std;

int main() {
    
    float nota1, nota2;
    int opcao;
    
    do {
        
        cout << "Digite a primeira nota: ";
        cin >> nota1;
        
        cout << "Digite a segunda nota: ";
        cin >> nota2;
        
        cout << "A média é: " << (nota1 + nota2) / 2 << endl;
        
        cout << "Deseja fazer outra média?\n";
        cout << "1. Sim\n";
        cout << "2. Não\n";
        cin >> opcao;
        system ("clear");
        
    } while(opcao == 1); 
    
    return 0; 
}