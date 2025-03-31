#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int sorteio() {
    return rand() % 100 + 1;
}

int main() {
    int digito;
    int numeroSorteado;
    int tentativas = 0; 
    char opcao;  
    
    srand(time(0)); 
    numeroSorteado = sorteio(); 
    
    cout << "Tente acertar o número sorteado de 1 a 100!" << endl;

    do {
        cout << "Digite um número de 1 a 100: ";
        cin >> digito;
        tentativas++;  

        if (digito > numeroSorteado) {
            cout << "O número que você digitou é maior!" << endl;
        } else if (digito < numeroSorteado) {
            cout << "O número que você digitou é menor!" << endl;
        } else {
            cout << "Parabéns! Você acertou o número!" << endl;
            cout << "Você acertou em " << tentativas << " tentativas!" << endl;
        }
    } while (digito != numeroSorteado); 
    
    cout << "Deseja jogar novamente? (s/n): ";
    cin >> opcao;

    return 0;
}