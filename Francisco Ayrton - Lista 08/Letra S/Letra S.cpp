#include <iostream>

using namespace std;

int main() {
    const int linhas = 5;
    const int colunas = 6;
    int A[linhas][colunas], B[linhas][colunas], C[linhas][colunas];

    cout << "Digite os elementos da matriz A (apenas pares):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            int valor;
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> valor;

            while (valor % 2 != 0) {
                cout << "Valor inválido! Digite um número par para A[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> valor;
            }
            A[i][j] = valor;
        }
    }

    cout << "Digite os elementos da matriz B (apenas ímpares):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            int valor;
            cout << "Elemento B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> valor;

            while (valor % 2 == 0) {
                cout << "Valor inválido! Digite um número ímpar para B[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> valor;
            }
            B[i][j] = valor;
        }
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Matriz C (soma de A e B):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
