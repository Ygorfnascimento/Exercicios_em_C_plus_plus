#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    
    cout << "Digite o tamanho do cateto a: ";
    cin >> a;
    
    cout << "Digite o tamanho do cateto b: ";
    cin >> b;
    
    c = sqrt(a * a + b * b);
    
    cout << "A hipotenusa dos catetos é de: " << c << endl;
    
    return 0;
}
