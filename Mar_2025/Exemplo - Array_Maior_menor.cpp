#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    
    const int SIZE = 1000000;
    int num[SIZE], count, highest, lowest;
    
    unsigned seed = time(0); 
    srand(seed); 
    
    for(count = 0; count < SIZE; count++) {
        num[count] = rand(); 
    }
    
    highest = num[0];
    lowest = num[0];
    
    for(count = 1; count < SIZE; count++) {
        if(num[count] > highest) {
            highest = num[count];
        }
        
        if(num[count] < lowest) {
            lowest = num[count];
        }
    }
    
    cout << "Maior: " << highest << endl;
    cout << "Menor: " << lowest << endl;

    return 0;
}