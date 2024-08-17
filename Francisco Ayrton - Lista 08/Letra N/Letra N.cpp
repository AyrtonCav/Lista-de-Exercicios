#include <iostream>

using namespace std;

int main() {
    const int linhas = 7;
    const int colunas = 7;
    int A[linhas][colunas];
    int total_pares = 0;

    cout << "Digite os elementos da matriz A (7x7):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            if (A[i][j] % 2 == 0) { 
                total_pares++;
            }
        }
    }

    cout << "Total de elementos pares na matriz: " << total_pares << endl;

    return 0;
}
