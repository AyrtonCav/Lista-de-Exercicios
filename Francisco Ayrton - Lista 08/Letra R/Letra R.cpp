#include <iostream>

using namespace std;

int main() {
    const int tamanho = 4;
    int A[tamanho], B[tamanho], C[tamanho], D[tamanho];
    int E[4][4];

    cout << "Digite os elementos da matriz A (4 elementos):" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> A[i];
    }

    cout << "Digite os elementos da matriz B (4 elementos):" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> B[i];
    }

    cout << "Digite os elementos da matriz C (4 elementos):" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> C[i];
    }

    cout << "Digite os elementos da matriz D (4 elementos):" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> D[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        E[0][i] = 2 * A[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        E[1][i] = 3 * B[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        E[2][i] = 4 * C[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        int fatorial = 1;
        for (int j = 1; j <= D[i]; ++j) {
            fatorial *= j;
        }
        E[3][i] = fatorial;
    }

    cout << "Matriz E:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << E[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
