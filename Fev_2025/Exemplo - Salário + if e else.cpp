#include <iostream>

using namespace std;

int main(){
    
    float salario, imposto, salariomaisimposto;
    
    cout << "Qual é o seu salário atualmente: " "R$ " ;
    cin >> salario;
    
    if (salario > 3000) {
        salariomaisimposto = salario * 0.20;
        cout << "Você pagará R$ " << salariomaisimposto << " de imposto." << endl;
    } else {
        salariomaisimposto = salario * 0.15;
        cout << "Você pagará R$" << salariomaisimposto << " de imposto." << endl;
    }
    
    return 0;
}