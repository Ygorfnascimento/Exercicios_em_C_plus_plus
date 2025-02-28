#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
    float pi = M_PI; 
    float raio;
    int casas;
    
    cout << "Digite quantas casas decimais você deseja: ";
    cin >> casas;
    
    if (casas < 0) {
        cout << "Número de casas decimais não pode ser negativo!" << endl;
        return 1;
    }

    cout << "Digite o raio do círculo: ";
    cin >> raio;
    
    if (raio <= 0) {
        cout << "O raio deve ser maior que zero!" << endl;
        return 1;
    }
    
    cout << fixed << setprecision(casas);
    
    float perimetro = 2 * pi * raio;
    
    float area = pi * raio * raio;
    
    cout << "O perímetro é de: " << perimetro << endl;
    cout << "A área é de: " << area << endl;
    
    return 0;
}
