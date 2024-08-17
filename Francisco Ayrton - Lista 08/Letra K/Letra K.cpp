#include <iostream>

using namespace std;

int main() {
    const int linhas = 5;
    const int colunas = 5;
    float A[linhas][colunas];
    float soma_diagonal = 0.0;

    cout << "Digite os elementos da matriz A (5x5):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        soma_diagonal += A[i][i];
    }

    cout << "Somatório dos elementos da diagonal principal: " << soma_diagonal << endl;

    return 0;
}
