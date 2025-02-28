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
    
    soma = (mat * 3) + (fis * 2.5) + (qui * 2.5) + (por * 1) + (ing * 1);
    
    media = soma / (3 + 2.5 + 2.5 + 1 + 1);
    
    cout<<"A média  é de: " << media;
    
    return 0;
}