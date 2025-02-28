#include <iostream>

using namespace std;

int main() {
    float num1, num2, num3, num4, num5, media, soma;
 
    do {
        cout << "Digite o primeiro número: ";
        cin >> num1;
    
        cout << "Digite o segundo número: ";
        cin >> num2;
    
        cout << "Digite o terceiro número: ";
        cin >> num3;
    
        cout << "Digite o quarto número: ";
        cin >> num4;
    
        cout << "Digite o quinto número: ";
        cin >> num5;
        
        soma = num1 + num2 + num3 + num4 + num5;
        media = soma / 5;

        cout << "A soma dos números é: " << soma << endl;  
        cout << "A média dos números é: " << media << endl;

    } while (false); 

    return 0;
}