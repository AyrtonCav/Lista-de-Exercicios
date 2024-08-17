#include <iostream>

using namespace std;

int main() {
    const int linhas = 5;
    const int colunas = 4;
    int A[linhas][colunas], B[linhas][colunas];

    cout << "Digite os elementos da matriz A (5x4):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            int n = A[i][j];
            int resultado = 1;
            for (int k = 1; k <= n; ++k) {
                resultado *= k;
            }
            B[i][j] = resultado;
        }
    }

    cout << "Matriz A:" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz B:" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
