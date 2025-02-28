#include <iostream>

using namespace std;

int main(){
    
    int count, num1, limite;
    
    count = 1;
    
    cout << "Digite um número: ";
    cin >> num1;
    
    cout << "Digite até aonde essa tabuada vai: ";
    cin >> limite;
    
    for(count = 1; count <= limite; count++){
        cout << num1 << " X " << count << " = " << num1 * count << endl;
    }
    
    return 0;
}