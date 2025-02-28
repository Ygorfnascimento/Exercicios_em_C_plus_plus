#include <iostream>

using namespace std;

int main(){
    
    char letra;
    
    cout << "Digite uma letra: ";
    cin >> letra;
    
    switch(letra){
        
        case 'a':
        case 'A':
            cout << "Você digitou A.\n";
            break;
            
        case 'b':
        case 'B':
            cout << "Você digitou B.\n";
            break;
            
        case 'c':
        case 'C':
            cout << "Você digitou C.\n";
            break;
            
        default:
            cout << "Opção inválida!\n";
    }
    
    return 0;
}
