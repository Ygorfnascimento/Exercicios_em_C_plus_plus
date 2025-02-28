#include <iostream>

using namespace std;

int main() {
    
    int idade, doença;
    
    cout << "Digite a sua idade: ";
    cin >> idade;
    
    if (idade >= 18) {
        
        cout << "Você tem alguma restrição para doar sangue? " << endl;
        cout << "1. Não" << endl;
        cout << "2. Sim" << endl;
        cin >> doença;
    
        if (doença == 1) {
            cout << "Você pode doar sangue." << endl;
        }
        else {
            cout << "Você não pode, pois possui restrições." << endl;
        }
    }
    else {
        cout << "Você não é maior de idade, não pode doar sangue." << endl;
    }
    
    return 0;
}