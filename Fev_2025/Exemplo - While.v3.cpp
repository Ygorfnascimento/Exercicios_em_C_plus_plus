#include <iostream>

using namespace std;

int main() {
    
    int num, aux = 1;
    
    cout << "Digite um número: ";
    cin >> num;
    
    while (aux <= 10){
        
        cout << num << " x " << aux << " = " << num*aux<< endl;
        aux++;
    }
    
    return 0; 
}