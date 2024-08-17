#include <iostream>

using namespace std;

int main() {
    const int tamanho = 5;
    int A[tamanho][tamanho], B[tamanho][tamanho];

    cout << "Digite os elementos da matriz A (5x5):" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if (i == j) {

                B[i][j] = 3 * A[i][j];
            } else {

                B[i][j] = 2 * A[i][j];
            }
        }
    }

    cout << "Matriz B:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
