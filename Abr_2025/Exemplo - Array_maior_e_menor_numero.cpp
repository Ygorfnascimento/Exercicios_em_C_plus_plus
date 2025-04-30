#include <iostream>

using namespace std;

int main() {
    float notas[10] = {3, 7, 5, 8, 6.5, 7.8, 8.9, 9, 7, 8.5};
    float func_maior = notas[0];
    float func_menor = notas[0];
    
    for (int i = 1; i < 10; i++) {
        if (notas[i] > func_maior) {
            func_maior = notas[i];
        }
        if (notas[i] < func_menor) {
            func_menor = notas[i];
        }
    }
   
    cout << "O maior valor é: " << func_maior << endl;
    cout << "O menor valor é: " << func_menor << endl;
    
    return 0; 
}