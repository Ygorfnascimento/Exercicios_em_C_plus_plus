#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    int vezes, resultado1 = 0, resultado2 = 0; 
    
    std::cout << "Quantas vezes você quer lançar a moeda? ";
    std::cin >> vezes;

    for (int i = 0; i < vezes; ++i) {
        int resultado = rand() % 2; 
        
        if (resultado == 0) {
            std::cout << "Resultado " << i+1 << ": Cara" << std::endl;
            resultado1++;  
        } else {
            std::cout << "Resultado " << i+1 << ": Coroa" << std::endl;
            resultado2++;  
        }
    }

    std::cout << "Cara apareceu " << resultado1 << " vezes." << std::endl;
    std::cout << "Coroa apareceu " << resultado2 << " vezes." << std::endl;

    return 0;
}
