#include <iostream> 

using namespace std;

int main() {
    float nota;
    
    while (true) {
        cout << "Digite uma nota: ";
        cin >> nota;
        
        if (nota >= 10) {
            cout << "Notas acima de 10 são inválidas!" << endl;
            continue;
        } else if (nota <= 0) {
            cout << "Nota negativa, digite uma nota válida." << endl;
        } else {
        } break;
    }
    
    cout << "A nota é: " << nota << endl;
    
    return 0;
}
