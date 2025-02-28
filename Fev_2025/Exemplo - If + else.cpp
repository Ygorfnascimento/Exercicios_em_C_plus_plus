#include <iostream>

using namespace std;

int main (){
    
    float numero1, numero2;
    
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    
    cout << "Digite o segundo número: ";
    cin >> numero2;
    
    if (numero1 == numero2) {
        cout << "Os números são iguais.";
    } else {
        cout << "Os números são diferentes.";
    }

    return 0;
}