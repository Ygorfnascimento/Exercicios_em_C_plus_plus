#include <iostream>

using namespace std;

float encontrarmaior (float num1, float num2, float num3) {
    float maior = num1; 
    
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }
    
    return maior;
}

float encontrarmenor (float num1, float num2, float num3) {
    float menor = num1;
    
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    
    return menor;
}

int main() {
    float num1, num2, num3;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    cout << "Digite o terceiro número: ";
    cin >> num3;
    
    float maior = encontrarmaior(num1, num2, num3);
    float menor = encontrarmenor(num1, num2, num3);
    
    cout << "O maior número é: " << maior << endl;
    cout << "O menor número é: " << menor << endl;
    
    return 0;
}
