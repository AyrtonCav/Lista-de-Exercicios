#include <iostream>

using namespace std;

int main() {
    const int linhas = 4;
    const int colunas = 5;
    int A[linhas][colunas], B[linhas][colunas], C[linhas][colunas];

    cout << "Digite os elementos da matriz A (divisíveis por 3 e 4):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            int valor;
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> valor;

            while (valor % 3 != 0 || valor % 4 != 0) {
                cout << "Valor inválido! Digite um número divisível por 3 e 4 para A[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> valor;
            }
            A[i][j] = valor;
        }
    }

    cout << "Digite os elementos da matriz B (divisíveis por 5 ou 6):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            int valor;
            cout << "Elemento B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> valor;

            while (valor % 5 != 0 && valor % 6 != 0) {
                cout << "Valor inválido! Digite um número divisível por 5 ou 6 para B[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> valor;
            }
            B[i][j] = valor;
        }
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Matriz C (subtração de A e B):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
