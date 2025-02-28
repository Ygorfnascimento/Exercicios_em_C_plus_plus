#include <iostream>

using namespace std;

int main() {
    float horas, minutos, segundos;

    cout << "Digite as horas: ";
    cin >> horas;

    cout << "Digite os minutos: ";
    cin >> minutos;

    cout << "Horas em minutos: " << horas * 60 << endl;
    cout << "Minutos em segundos: " << minutos * 60 << endl;  

    return 0;
}