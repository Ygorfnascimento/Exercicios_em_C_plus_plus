#include <iostream>

using namespace std;

int main(){
    
    float nota1, nota2, nota3;
    float media;
    
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    
    cout <<"Digite a terceira nota: ";
    cin >> nota3;
    
    media = nota1 + nota2 + nota3 / 3;
    
    cout <<"A média das notas é: " << media << endl;
    
    return 0;
}