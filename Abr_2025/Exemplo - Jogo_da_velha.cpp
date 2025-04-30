#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAM = 3; 

void exibirTabuleiro(const vector<vector<char>>& tabuleiro) {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < TAM; ++i) {
        cout << i << " ";
        for (int j = 0; j < TAM; ++j) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool jogadaValida(const vector<vector<char>>& tabuleiro, int linha, int coluna) {
    return linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM && tabuleiro[linha][coluna] == ' ';
}

bool verificarVitoria(const vector<vector<char>>& tabuleiro, char jogador) {

    for (int i = 0; i < TAM; ++i) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) {
            return true;
        }
    }

    for (int j = 0; j < TAM; ++j) {
        if (tabuleiro[0][j] == jogador && tabuleiro[1][j] == jogador && tabuleiro[2][j] == jogador) {
            return true;
        }
    }
    
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) {
        return true;
    }
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) {
        return true;
    }

    return false;
}

int main() {
    vector<vector<char>> tabuleiro(TAM, vector<char>(TAM, ' '));
    char jogadorAtual = 'X';
    int jogadas = 0;
    bool jogoAcabou = false;

    cout << "Bem-vindo ao Jogo da Velha!" << endl;

    while (!jogoAcabou) {
        exibirTabuleiro(tabuleiro);
        cout << "Jogador " << jogadorAtual << ", digite linha (0-2): ";
        int linha;
        cin >> linha;
        cout << "Digite coluna (0-2): ";
        int coluna;
        cin >> coluna;

        if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM) {
            cout << "Coordenadas inválidas. Tente novamente.\n";
            continue;
        }

        if (!jogadaValida(tabuleiro, linha, coluna)) {
            cout << "Essa posição já está ocupada. Tente novamente.\n";
            continue;
        }

        tabuleiro[linha][coluna] = jogadorAtual;
        jogadas++;

        if (verificarVitoria(tabuleiro, jogadorAtual)) {
            exibirTabuleiro(tabuleiro);
            cout << "🎉 Jogador " << jogadorAtual << " venceu!\n";
            jogoAcabou = true;
        } else if (jogadas == TAM * TAM) {
            exibirTabuleiro(tabuleiro);
            cout << "🤝 Empate!\n";
            jogoAcabou = true;
        } else {
            jogadorAtual = (jogadorAtual == 'X' ? 'O' : 'X'); // Alterna os jogadores
        }
    }

    cout << "\nFim do jogo.\n";
    return 0;
}