#include <iostream>

using namespace std;

int main(){
    
    float velocidade;
    
    cout << "Digite a velocidade do veículo: ";
    cin >> velocidade;
    
    if(velocidade > 120 || velocidade < 40){
        cout << "Você será multado!";
    }
    else{
        cout << "Você não será multado!"; 
    }
    
    return 0;
}