#include <iostream>

using namespace std;
int main() {

    float celsius, fahrenheit;
    
    cout<<" Digite a temperatura em celsius: ";
    cin>>celsius;
    
    fahrenheit = (celsius * 1.8 + 32);
   
    cout<<" A temperatura em fahrenheit é de: " << fahrenheit;
    
    return 0;
}