#include <iostream>

using namespace std;

int main()
{
    float notas[5] = {5.2, 3, 7.5, 9, 2};
    
    cout << "Notas: " << notas[0] << " | " << notas[1]  << " | " << notas [2] << " | " << notas[3] << " | " << notas[4] << endl;
    
    float media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;
    
    cout << "A média é: " << media << endl;

    return 0;
}
