#include <iostream>

using namespace std;

int main() {
    int numInicial, numFinal;

    cout << "Digite um número inicial: ";
    cin >> numInicial;
    cout << "Digite um número final: ";
    cin >> numFinal;

    if (numInicial <= numFinal) {
        for (int i = numInicial; i <= numFinal; i++) {
            cout << i << " ";
        }
    } else {
        cout << "O número inicial deve ser menor ou igual ao número final.";
    }

    return 0;
}