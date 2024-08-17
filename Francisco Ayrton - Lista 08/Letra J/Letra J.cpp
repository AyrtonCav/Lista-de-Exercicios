#include <iostream>

using namespace std;

int main() {
    const int linhas = 6;
    const int colunas = 5;
    int A[linhas][colunas], B[linhas][colunas];

    cout << "Digite os elementos da matriz A (6x5):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            if (A[i][j] % 2 == 0) { 
                B[i][j] = A[i][j] + 5;
            } else { 
                B[i][j] = A[i][j] - 4;
            }
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
