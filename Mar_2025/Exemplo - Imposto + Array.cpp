#include <iostream>

using namespace std;

int main()
{
    const int ARRAY_SIZE = 6;
    float salario_func[ARRAY_SIZE]; 
    int cont;
    
    for(cont = 0; cont < ARRAY_SIZE; cont++)  
    {
        cout << "Digite o salário do funcionário " << cont + 1 << ": ";
        cin >> salario_func[cont];
    }

    cout << "Imposto a pagar: \n";
    
    for(cont = 0; cont < ARRAY_SIZE; cont++)  
    {
        cout << "Funcionário " << cont+1 << ":  R$" << salario_func[cont] * 0.15 << endl;
    }

    return 0;
}