#include <iostream>
using namespace std;

int main() {
    float notas[11] = {8.5, 7.0, 6.5, 9.0, 7.5, 8.0, 6.0, 9.5, 7.8, 8.2, 7.3};

    for (int i = 0; i < 11; i++) {
        if (notas[i] > 7) {
            cout << "Nota " << i << ": Você está aprovado!" << endl;
        } else if (notas[i] > 5) {
            cout << "Nota " << i << ": Você está em recuperação!" << endl;
        } else {
            cout << "Nota " << i << ": Você foi reprovado!" << endl;
        }
    }

    return 0;
}