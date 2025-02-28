#include <iostream>

using namespace std;

int main() {
    int nota;

    cout << "Digite a sua nota: ";
    cin >> nota;

    if (nota >= 90) {
        cout << "Nota A" << endl;
    }
    else if (nota >= 80) {
        cout << "Nota B" << endl;
    }
    else if (nota >= 70) {
        cout << "Nota C" << endl;
    }
    else if (nota >= 60) {
        cout << "Nota D" << endl;
    }
    else {
        cout << "Reprovado!" << endl;
    }

    return 0;
}