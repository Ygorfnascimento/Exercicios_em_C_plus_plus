#include <iostream> 

using namespace std;

float quadrado(float num) {
    return num * num;
}

int main() {
    float var;
    
    cout << "Digite um número para elevar ao quadrado: \n";
    cin >> var;
    
    cout << var << " X " << var << " = " << quadrado(var) << endl; 
    
    return 0;
}
