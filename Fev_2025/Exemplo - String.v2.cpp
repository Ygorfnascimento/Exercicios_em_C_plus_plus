#include <iostream>

using namespace std;

int main() {

    string nome;
    
    cout <<"Digite seu nome: ";
    getline(cin, nome);
    
    cout <<"Olá," << nome << "! Tudo bem?";
    
    return 0;
}
