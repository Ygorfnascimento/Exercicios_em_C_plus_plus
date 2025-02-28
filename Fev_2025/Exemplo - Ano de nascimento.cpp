#include <iostream>

using namespace std;

int main() {
    
    int anoatual, idade, anodenascimento;
    
    cout<<"Digite o ano atual: ";
    cin>>anoatual;
    
    cout<<"Digite a sua idade: ";
    cin>>idade;
    
    anodenascimento = anoatual - idade;
    cout<<"O ano do seu nascimento é de: " << anodenascimento;

    return 0;
}