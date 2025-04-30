#include <iostream>
#include <cstdlib>
#include <ctime>
#include <numeric> 

using namespace std;

int main() {

    const int tamanho = 7; // Definindo o tamanho do vetor como 7
    int vetor[tamanho];

    srand(static_cast<unsigned int>(time(0)));

    cout << "Programação da semana:" << endl;

    int maiorChuva = -1;      
    int diaMaiorChuva = -1;

    double soma = 0.0;

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 683 + 1; // Gera um número aleatório entre 1 e 683
        cout << "Milimetros em cada dia[" << i << "] = " << vetor[i] << endl;
        
        if (vetor[i] > maiorChuva) {
            maiorChuva = vetor[i];
            diaMaiorChuva = i;
        }

        soma += vetor[i];
    }

    double media = soma / tamanho;

    cout << "\nO dia que mais choveu foi o dia [" << diaMaiorChuva << "] com " << maiorChuva << " milímetros." << endl;
    cout << "A média da semana foi de: " << media << " milímetros." << endl;

    return 0;
}