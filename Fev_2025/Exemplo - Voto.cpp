#include <iostream>

using namespace std;

int main(){
    
    int idade;
    
    cout << "Digite a sua idade: ";
    cin >> idade;
    
    if(idade >= 18 && idade <= 65){
        cout << "Seu voto é obrigatório." << endl;
    }
    else if(idade >= 16) {
        cout << "Voto facultativo." << endl;
    }
    else {
        cout << "Você não tem idade para votar." << endl;
    }

    return 0;
}