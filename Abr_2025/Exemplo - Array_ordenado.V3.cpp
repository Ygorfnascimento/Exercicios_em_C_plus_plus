#include <iostream>
#include <random>

using namespace std;

int gen() {
    random_device rd;
    mt19937 gen_numb(rd());
    uniform_int_distribution<int> dis(1, 100);

    return dis(gen_numb);
}

void preencherArray(int num[], int size) {
    for (int i = 0; i < size; i++) {
        num[i] = gen();
    }
}

void selectionSort(int num[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int indexMaior = i;
        for (int j = i + 1; j < size; j++) {
            if (num[j] > num[indexMaior]) {
                indexMaior = j;
            }
        }

        if (indexMaior != i) {
            int temp = num[i];
            num[i] = num[indexMaior];
            num[indexMaior] = temp;
        }
    }
}

void exibirArray(int num[], int size) {
    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = 10;
    int num[size];

    preencherArray(num, size);

    cout << "Array original:\n";
    exibirArray(num, size);

    selectionSort(num, size);

    cout << "\nArray ordenado:\n";
    exibirArray(num, size);

    return 0;
}
