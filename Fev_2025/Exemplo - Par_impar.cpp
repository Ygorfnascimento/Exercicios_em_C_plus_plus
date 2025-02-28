#include <iostream> 

using namespace std;

int par_impar() {
    int num;
    
    cout << "Digite um número: \n";
    cin >> num;
    
    if (num % 2 == 0) {
        return 0;  
    } else {
        return 1;  
    }
}

int main() {
    if (par_impar() == 0) {  
        cout << "O número é par.\n";
    } else {
        cout << "O número é ímpar.\n";  
    }
    
    return 0;
}
