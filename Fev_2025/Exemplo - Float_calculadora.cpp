#include <iostream>

using namespace std;

float soma(float num1, float num2) {
    return num1 + num2;
}

float subtracao(float num1, float num2) {
    return num1 - num2;
}

float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Não é possível dividir por 0." << endl;
        return -1;
    }
}

int main() {
    float num1, num2, resultado;
    int menu;

    do {
        cout << "Qual operador matemático você quer usar? \n";
        cout << "0. Sair \n";
        cout << "1. Soma \n";
        cout << "2. Subtração \n";
        cout << "3. Multiplicação \n";
        cout << "4. Divisão \n";
        cin >> menu;

        if (menu == 0) {
            cout << "O programa foi encerrado." << endl;
            break;
        }

        cout << "Digite o primeiro número: ";
        cin >> num1;
        cout << "Digite o segundo número: ";
        cin >> num2;

        switch(menu) {
            case 1:
                resultado = soma(num1, num2);
                break;
            case 2:
                resultado = subtracao(num1, num2);
                break;
            case 3:
                resultado = multiplicacao(num1, num2);
                break;
            case 4:
                resultado = divisao(num1, num2);
                break;
            default:
                cout << "Você escolheu uma opção inválida!" << endl;
                continue;
        }

        if (resultado != -1) {
            cout << "Resultado: " << resultado << endl;
        }

    } while (menu != 0);

    return 0;
}