#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    float raio, volume;

    cout << "Digite o raio da esfera: ";
    cin >> raio;

    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);

    cout << "O volume da esfera é: " << volume << endl;

    return 0;
}
