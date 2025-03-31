#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rolar_dado() {
    return rand() % 6 + 1; // Gera um número aleatório de 1 a 6
}

int main() {
    srand(time(0)); // Gerador de números aleatórios
    
    char opcao;
    int ultimo_resultado;
    int contagem1 = 0, contagem2 = 0, contagem3 = 0, contagem4 = 0, contagem5 = 0, contagem6 = 0;
    
    do {
        ultimo_resultado = rolar_dado();
        
        switch (ultimo_resultado) {
            case 1: contagem1++; break;
            case 2: contagem2++; break;
            case 3: contagem3++; break;
            case 4: contagem4++; break;
            case 5: contagem5++; break;
            case 6: contagem6++; break;
        }
        
        cout << "Número aleatório gerado: " << ultimo_resultado << endl;
        cout << "Deseja rolar o dado novamente? (s/n): ";
        cin >> opcao;
    } while (opcao == 's' || opcao == 'S');
    
    cout << "Último resultado gerado: " << ultimo_resultado << endl;
    cout << "Frequência dos números sorteados: " << endl;
    cout << "Número 1: " << contagem1 << " vezes." << endl;
    cout << "Número 2: " << contagem2 << " vezes." << endl;
    cout << "Número 3: " << contagem3 << " vezes." << endl;
    cout << "Número 4: " << contagem4 << " vezes." << endl;
    cout << "Número 5: " << contagem5 << " vezes." << endl;
    cout << "Número 6: " << contagem6 << " vezes." << endl;
    
    return 0;
}