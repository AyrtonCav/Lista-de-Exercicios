#include <iostream>

using namespace std;

int main() {
    const int linhas = 4;
    const int colunas = 5;
    int A[linhas][colunas];
    int B[linhas]; 
    int C[colunas]; 
    int soma_total_B = 0, soma_total_C = 0;

    cout << "Digite os elementos da matriz A (4x5):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        B[i] = 0;
        for (int j = 0; j < colunas; ++j) {
            B[i] += A[i][j];
        }
        soma_total_B += B[i];
    }

    for (int j = 0; j < colunas; ++j) {
        C[j] = 0;
        for (int i = 0; i < linhas; ++i) {
            C[j] += A[i][j];
        }
        soma_total_C += C[j]; 
    }

    cout << "Somatório dos elementos da matriz B: " << soma_total_B << endl;
    cout << "Somatório dos elementos da matriz C: " << soma_total_C << endl;
    cout << "Somatório total (B + C): " << soma_total_B + soma_total_C << endl;

    return 0;
}
