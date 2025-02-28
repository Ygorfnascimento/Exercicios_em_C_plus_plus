#include <iostream>

using namespace std;

int main(){
   
    int aux, numero_materias;
    float nota, soma = 0;
    
    cout << "Digite a quantidade de matérias: ";
    cin >> numero_materias;
    
    for(aux = 1; aux <= numero_materias; aux++){
        cout << "Nota " << aux << ": ";
        cin >> nota;
        
        soma += nota;
    }
   
    cout << "Média: " << soma/numero_materias << endl;
    return 0;
}