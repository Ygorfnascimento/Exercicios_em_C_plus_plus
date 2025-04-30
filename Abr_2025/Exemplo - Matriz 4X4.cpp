#include <iostream>
#include <iomanip>
using namespace std;

const int ALUNOS = 4;
const int MATERIAS = 4;

int main() {
    double matriz[ALUNOS][MATERIAS];
    cout << fixed << setprecision(1);  

    for (int i = 0; i < ALUNOS; i++) {
        cout << "Digite as notas do aluno " << i + 1 << " para as 4 matérias:\n";
        for (int j = 0; j < MATERIAS; j++) {
            cout << "Nota da matéria " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < ALUNOS; i++) {
        double somaAluno = 0;
        for (int j = 0; j < MATERIAS; j++) {
            somaAluno += matriz[i][j];
        }
        cout << "A média do aluno " << i + 1 << " é: " << somaAluno / MATERIAS << endl;
    }

    double somaGeral = 0;
    for (int i = 0; i < ALUNOS; i++) {
        double somaAluno = 0;
        for (int j = 0; j < MATERIAS; j++) {
            somaAluno += matriz[i][j];
        }
        somaGeral += somaAluno / MATERIAS;
    }
    cout << "A média geral da turma é: " << somaGeral / ALUNOS << endl;

    for (int j = 0; j < MATERIAS; j++) {
        double somaMateria = 0;
        for (int i = 0; i < ALUNOS; i++) {
            somaMateria += matriz[i][j];
        }
        cout << "A média da matéria " << j + 1 << " é: " << somaMateria / ALUNOS << endl;
    }

    return 0;
}