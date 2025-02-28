#include <iostream>

using namespace std;

int main() {

    string nome, sobrenome;
    
    cout <<"Digite seu nome: ";
    getline(cin, nome);
    
    cout <<"Digite o seu sobrenome: ";
    getline(cin, sobrenome);
    
    cout <<"Olá, " << nome << " " << sobrenome << "! Tudo bem?";
    
    return 0;
}
