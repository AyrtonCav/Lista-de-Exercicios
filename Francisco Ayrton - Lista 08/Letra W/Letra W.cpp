#include <iostream>

using namespace std;

int main() {
    const int linhas = 5;
    const int colunas = 5;
    int A[linhas][colunas], B[linhas][colunas];

    cout << "Digite os elementos da matriz A (5x5):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {

            if (i + j == linhas - 1) { 
                B[i][j] = 3 * A[i][j]; 
            } else {
                B[i][j] = 2 * A[i][j]; 
            }
        }
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
