#include <iostream>

using namespace std;

int main() {
    
    int num1, num2;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    if (num1 > num2) {
        cout << "O número " << num1 << " é maior que o número " << num2;
    } 
    else if (num1 == num2) {
        cout << "Os números são iguais.";
    }
    else {
        cout << "O número " << num2 << " é maior que o número " << num1;
    }
    
    return 0;
}
