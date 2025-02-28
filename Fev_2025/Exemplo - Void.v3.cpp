#include <iostream>

using namespace std;

void doub() {
    float num, dobro;
    
    cout << "Digite um número: ";
    cin >> num;
    
    dobro = 2 * num;
    
    cout << "O dobro do número " << num << " é: " << dobro << endl; 
}

int main() {
    doub(); 
    
    return 0;
}
