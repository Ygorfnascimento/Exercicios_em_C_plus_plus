#include <iostream>

using namespace std;

void doub(int[], int);

int main() {
    int num[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Array antes da função: \n";
    for (int count = 0; count < size; count++) {
        cout << "Elemento " << count + 1 << ": " << num[count] << endl;
    }

    doub(num, size);

    cout << "Array depois da função: \n";
    for (int count = 0; count < size; count++) {
        cout << "Elemento " << count + 1 << ": " << num[count] << endl;
    }

    return 0;
}

void doub(int num[], int size) {
    for (int count = 0; count < size; count++) {
        num[count] *= 2;  
    }
}