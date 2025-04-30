#include <iostream>

using namespace std;

int const COLUMN = 2;
int const ROW = 2;

void show(int matriz[ROW][COLUMN]); 

int main() {
    int matriz[ROW][COLUMN] = {{1, 2}, {3, 4}};
    
    show(matriz);
    
    return 0;
}

void show(int matriz[ROW][COLUMN]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            cout << matriz[i][j] << " "; 
        }
        cout << endl;
    }
}