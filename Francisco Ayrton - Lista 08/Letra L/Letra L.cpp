#include <iostream>

using namespace std;

int main() {
    const int linhas = 15;
    const int colunas = 15;
    int A[linhas][colunas];
    int soma_pares_diagonal = 0;

    cout << "Digite os elementos da matriz A (15x15):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        if (A[i][i] % 2 == 0) {
            soma_pares_diagonal += A[i][i];
        }
    }

    cout << "Somatório dos elementos pares na diagonal principal: " << soma_pares_diagonal << endl;

    return 0;
}
