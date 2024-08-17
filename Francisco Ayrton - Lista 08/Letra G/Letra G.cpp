#include <iostream>

using namespace std;

int main() {
    const int linhas = 4;
    const int colunas = 5;
    double A[linhas][colunas], B[linhas][colunas];

    cout << "Digite os valores das temperaturas em graus Celsius para a matriz A (4x5):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            B[i][j] = (A[i][j] * 9.0 / 5.0) + 32.0; 
        }
    }

    cout << "Matriz A (Temperaturas em Celsius):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz B (Temperaturas em Fahrenheit):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
