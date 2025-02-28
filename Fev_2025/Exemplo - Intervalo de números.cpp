#include <iostream> 

using namespace std;

int main(){
    
    int num1, num2;
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;
    
    if(num1 < num2){
        cout << "O intervalo entre o número " << num1 << " e o " << num2 << " é: ";
        for(int i = num1; i <= num2; i++){
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "O primeiro número não é menor que o segundo." << endl;
    }
    
    return 0; 
}
