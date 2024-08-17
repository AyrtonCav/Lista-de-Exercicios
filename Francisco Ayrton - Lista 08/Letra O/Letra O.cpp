#include <iostream>

using namespace std;

int main() {
    const int linhas = 8;
    const int colunas = 6;
    float A[linhas][colunas];
    float B[linhas]; 
    float soma_total_B = 0.0;


    cout << "Digite os elementos da matriz A (8x6):" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        B[i] = 0.0;
        for (int j = 0; j < colunas; ++j) {
            B[i] += A[i][j];
        }
    }

    for (int i = 0; i < linhas; ++i) {
        soma_total_B += B[i];
    }

    cout << "Somatório dos elementos da matriz B: " << soma_total_B << endl;

    return 0;
}
