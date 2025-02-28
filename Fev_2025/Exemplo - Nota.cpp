#include <iostream>

using namespace std;

int main(){
    
    float nota;
    
    cout<<"Digite a sua nota: ";
    cin>> nota;
    
    nota >= 50? cout<<"Você foi aprovado." : cout<<"Você foi reprovado.";
    
    return 0;
}