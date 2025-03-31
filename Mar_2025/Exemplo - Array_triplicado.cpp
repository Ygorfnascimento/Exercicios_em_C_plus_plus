#include <iostream>

using namespace std;

void copyArray(int [], int [], int);
void tripple(int [], int);

int main() {
    int num[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(num) / sizeof(num[0]);  
    
    int num_copy[size];
    
    copyArray(num, num_copy, size);  
    tripple(num_copy, size);  
    
    cout << "Array original: \n";
    for (int count = 0; count < size; count++) {
        cout << num[count] << " ";
    }
    
    cout << "\n\nArray triplicado: \n";
    
    for (int count = 0; count < size; count++) {
        cout << num_copy[count] << " ";  
    }
    
    cout << "\n\nO tamanho do array NUM é: " << size;
    
    return 0;
}

void copyArray(int num[], int num_copy[], int size) {  
    for (int count = 0; count < size; count++) {  
        num_copy[count] = num[count];  
    }
}

void tripple(int num_copy[], int size) {  
    for (int count = 0; count < size; count++) {  
        num_copy[count] *= 3;  
    }
}