#include <iostream>

using namespace std;

int main() {
    
    float valor1, valor2;
    
    cout << "Digite o primeiro valor: ";
    cin >> valor1;
    
    cout << "Digite o segundo valor: ";
    cin >> valor2;

    float porcentagem = (valor2 / valor1) * 100;
    
    cout << "A porcentagem de " << valor2 << " em relação a " << valor1 << " é: " << porcentagem << "%" << endl;
    
    return 0;
}
