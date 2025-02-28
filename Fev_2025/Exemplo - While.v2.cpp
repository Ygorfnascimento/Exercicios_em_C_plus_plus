#include <iostream>

using namespace std;

int main(){
    
    int nota;
    
    cout<<"Digite a sua nota: ";
    cin>>nota;
    
    while(nota < 0 || nota > 10) {
        cout << "Nota inválida, digite novamente. \n";
        cin>> nota;
    }
    
    cout << "Nota registrada com sucesso.";
    
    return 0;
}