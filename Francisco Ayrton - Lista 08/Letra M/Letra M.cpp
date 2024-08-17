#include <iostream>

using namespace std;

int main() {
    const int tamanho = 5;
    float A[tamanho][tamanho];
    float soma = 0.0;

    cout << "Digite os elementos da matriz A (5x5):" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < tamanho; ++i) {
        if ((i + 1) % 2 != 0) { 
            soma += A[i][i]; 
        }
    }

    cout << "Somatório dos elementos situados nas posições ímpares da diagonal principal: " << soma << endl;

    return 0;
}
