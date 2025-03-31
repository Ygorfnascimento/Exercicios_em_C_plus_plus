#include <iostream>
#include <random>

using namespace std;

int gen() {
    random_device rd;
    mt19937 gen_numb(rd());
    uniform_int_distribution<int> dis(1, 100);

    return dis(gen_numb);
}

int main() {
    int size = 10;
    int num[size];
    

    for (int aux = 0; aux < size; aux++) {
        num[aux] = gen();
    }

    cout << "Array original:\n";
    for (int aux = 0; aux < size; aux++) {
        cout << num[aux] << " ";
    }
    cout << endl;

    for (int prev = 0; prev < size - 1; prev++) {
        for (int next = prev + 1; next < size; next++) {
            if (num[prev] < num[next]) { 
                int aux = num[prev];
                num[prev] = num[next];
                
                num[next] = aux;
            }
        }
    }

    cout << "\nArray ordenado:\n";
    for (int aux = 0; aux < size; aux++) {
        cout << num[aux] << " ";
    }
    cout << endl;

    return 0;
}
