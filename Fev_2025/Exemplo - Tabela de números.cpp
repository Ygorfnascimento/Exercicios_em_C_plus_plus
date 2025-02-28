#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, k, numero, var = 1;

    cout << "Digite o número: ";
    cin >> numero;

    for (i = 1; i <= numero; i++) {
        for (k = 1; k <= numero; k++) {
            cout << setw(4) << var++ << " ";
        }
        cout << endl;
    }

    return 0;
}