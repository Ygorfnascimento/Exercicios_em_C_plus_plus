#include <iostream>

using namespace std;

int main(){
   
   int opcao;
   
   do {
       cout << "Digite uma opção: \n";
       cout << "0. Sair\n";
       cout << "1. Saldo\n";
       cout << "2. Extrato\n";
       cout << "3. Transferência\n";
       cout << "4. Pix\n";
       cin >> opcao;
   }while (opcao);
   
    return 0;
}