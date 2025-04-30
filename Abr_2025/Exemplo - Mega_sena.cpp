#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int tamanho = 6; // Definindo o tamanho do vetor como 6
    int vetor[tamanho];
    int sorteados[tamanho];
    int acertos = 0;

    srand(static_cast<unsigned int>(time(0)));

    cout << "Digite os números da Mega-Sena (entre 1 e 60):" << endl;
    
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
        
        if (vetor[i] < 1 || vetor[i] > 60) {
            cout << "Número incorreto, digite outro novamente!" << endl;
            i--; 
        }
    }
    
    cout << "\nNúmeros digitados para a Mega-Sena: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "\nNúmeros sorteados aleatoriamente: ";
    for (int i = 0; i < tamanho; i++) {
        sorteados[i] = rand() % 60 + 1; // Gera um número aleatório entre 1 e 60
        cout << sorteados[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (vetor[i] == sorteados[j]) {
                acertos++;
                break; 
            }
        }
    }

    cout << "\nVocê acertou " << acertos << " números." << endl;

    if (acertos == 6) {
        cout << "Parabéns, você ganhou a SENNA!" << endl;
    } else if (acertos == 5) {
        cout << "Você fez QUINA!" << endl;
    } else if (acertos == 4) {
        cout << "Você fez QUADRA!" << endl;
    } else {
        cout << "Você não acertou números suficientes para ganhar." << endl;
    }

    return 0;
}