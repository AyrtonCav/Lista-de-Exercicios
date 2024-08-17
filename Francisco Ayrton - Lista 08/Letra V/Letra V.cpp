#include <iostream>

using namespace std;

int main() {
    const int linhas = 5;
    const int colunas = 5;
    int A[linhas][colunas], B[linhas][colunas], C[linhas][colunas];

    cout << "Digite os elementos da matriz A (não divisíveis por 3):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            int valor;
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> valor;

            while (valor % 3 == 0) {
                cout << "Valor inválido! Digite um número que não seja divisível por 3 para A[" << i + 1 << "][" << j + 1 << "]: ";
                cin >> valor;
            }
            A[i][j] = valor;
        }
    }

    cout << "Digite os elementos da matriz B (não divisíveis por 6):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            int valor;
            cout << "Elemento B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> valor;

            while (valor % 6 == 0) {
                cout << "Valor inválido! Digite um número que não seja divisível por 6 para B[" << i + 1 << "][" << j + 1 << "]: ";
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
