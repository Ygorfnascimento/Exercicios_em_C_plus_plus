#include <iostream>

using namespace std;

int main(){
    
    float mat, qui, ing, por, fis, media, soma;
    
    cout<<"Digite a sua nota de matemática: ";
    cin>>mat;
    
    cout<<"Digite a sua nota de física: ";
    cin>>fis;
    
    cout<<"Digite a sua nota de quimíca: ";
    cin>>qui;
    
    cout<<"Digite a sua nota de português: ";
    cin>>por;
    
    cout<<"Digite a sua nota de inglês: ";
    cin>>ing;
    
    
    soma = (mat + qui + ing + por + fis);
    
    media = (soma / 5);
    
    cout<<"A média é de: " << media;
    
    return 0;
}