#include <iostream>

using namespace std;

int main (){
    
    float lado1, lado2, lado3;
    
    cout<<"Digite o primeiro número do lado do triângulo: ";
    cin>>lado1;
    
    cout<<"Digite o segundo número do lado do triângulo: ";
    cin>>lado2;
    
    cout<<"Digite o terceiro número do lado do triângulo: ";
    cin>>lado3;
        
    if(lado1 == lado2 && lado2 == lado3) {
        cout<<"O triângulo é equilátero.";
    } 
       else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout<<"O triângulo é isóceles.";
    } 
       else {
        cout<<"O triângulo é escaleno.";
    }
    return 0;
}