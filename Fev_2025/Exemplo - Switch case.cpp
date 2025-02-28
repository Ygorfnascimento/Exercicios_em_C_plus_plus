#include <iostream>

using namespace std;

int main(){
    
    int opcao;
    
    cout<<"1. Saque\n";
    cout<<"2. Extrato\n";
    cout<<"3. Transferência\n";
    cout<<"4. Depósito\n";
    cout<<"5. Pix\n";
    cout<<"Digite uma opção: ";
    cin>>opcao;
    
    switch(opcao){
        case 1:
            cout<<"Opção selecioanda : Saque\n";
            break;
        case 2:
            cout<<"Opção selecioanda : Extrato\n";
            break;
        case 3:
            cout<<"Opção selecioanda : Transferência\n";
            break;
        case 4:
            cout<<"Opção selecioanda : Depósito\n";
            break;
        case 5:
            cout<<"Opção selecioanda : Pix\n";
            break;
        default:
            cout<<"Opção inválida!\n";
    }
    
    return 0;
}