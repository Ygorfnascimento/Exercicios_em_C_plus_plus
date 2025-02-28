#include <iostream>

using namespace std;

int main() {
    int tamanho;

    cout << "Digite o tamanho do triângulo: ";
    cin >> tamanho;

    for (int i = 1; i <= tamanho; i++) {
        
        for (int k = 1; k <= tamanho - i; k++) {
            cout << " "; 
        }
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        
        cout << endl; 
    }

    return 0;
}
