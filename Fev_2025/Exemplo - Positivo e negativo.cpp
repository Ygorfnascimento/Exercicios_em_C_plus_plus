#include <iostream>

using namespace std;

int main() {
    
    float num1, num2;
    
    cout << "Digite o um número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    if (num1 + num2 > 0) {
        cout << "O número é positivo." << endl;
    } else if (num1 + num2 < 0) {
        cout << "O número é negativo." << endl;
    } else {
        cout << "O número é zero." << endl;
    }
    
    return 0;
}
