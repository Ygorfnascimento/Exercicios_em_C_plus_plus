#include <iostream>

using namespace std;

void imprime(){
    int varlocal = 2;
    cout << varlocal;
}

int main(){
    int varlocal = 1;
    imprime();
    cout << " Dentro do Main: " << varlocal;
    return 0;
}