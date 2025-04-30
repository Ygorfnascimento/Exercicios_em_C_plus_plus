#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAM = 5;
const int NAVIOS = 5;

void sortearNavios(vector<vector<int>>& tabuleiro) {
    int colocados = 0;
    while (colocados < NAVIOS) {
        int linha = rand() % TAM;
        int coluna = rand() % TAM;
        if (tabuleiro[linha][coluna] == 0) {
            tabuleiro[linha][coluna] = 1; // 1 representa navio
            colocados++;
        }
    }
}

int contarNaviosAoRedor(const vector<vector<int>>& tabuleiro, int l, int c) {
    int navios = 0;
    for (int i = l - 1; i <= l + 1; ++i) {
        for (int j = c - 1; j <= c + 1; ++j) {
            if (i >= 0 && i < TAM && j >= 0 && j < TAM) {
                if (!(i == l && j == c)) { // Ignorar a própria posição
                    navios += tabuleiro[i][j];
                }
            }
        }
    }
    return navios;
}

void exibirTabuleiro(const vector<vector<int>>& tiros) {
    cout << "  ";
    for (int i = 0; i < TAM; ++i) cout << i << " ";
    cout << "\n";
    for (int i = 0; i < TAM; ++i) {
        cout << i << " ";
        for (int j = 0; j < TAM; ++j) {
            if (tiros[i][j] == -1) cout << ". ";
            else if (tiros[i][j] == 1) cout << "X "; // Acerto
            else cout << "O "; // Erro
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));
    vector<vector<int>> tabuleiro(TAM, vector<int>(TAM, 0));
    vector<vector<int>> tiros(TAM, vector<int>(TAM, -1)); // -1: não atirado, 0: erro, 1: acerto

    sortearNavios(tabuleiro);

    int acertos = 0;

    while (acertos < NAVIOS) {
        int l, c;
        exibirTabuleiro(tiros);
        cout << "Digite linha (0-4): ";
        cin >> l;
        cout << "Digite coluna (0-4): ";
        cin >> c;

        if (l < 0 || l >= TAM || c < 0 || c >= TAM) {
            cout << "Coordenadas inválidas. Tente novamente.\n";
            continue;
        }

        if (tiros[l][c] != -1) {
            cout << "Você já atirou nessa posição. Tente outra.\n";
            continue;
        }

        if (tabuleiro[l][c] == 1) {
            cout << "💥 Acertou um navio!\n";
            tiros[l][c] = 1;
            acertos++;
        } else {
            int naviosProximos = contarNaviosAoRedor(tabuleiro, l, c);
            cout << "🌊 Água! Existem " << naviosProximos << " navios ao redor.\n";
            tiros[l][c] = 0;
        }
    }

    cout << "\n🎉 Parabéns! Você afundou todos os navios!\n";
    return 0;
}
