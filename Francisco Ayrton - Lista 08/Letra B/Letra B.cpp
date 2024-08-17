#include <iostream>

using namespace std;

int main() {
    const int tamanho = 7;
    int A[tamanho], B[tamanho], C[tamanho][2];

    cout << "Digite 7 elementos inteiros para a matriz A:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> A[i];
    }

    cout << "Digite 7 elementos inteiros para a matriz B:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> B[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        C[i][0] = A[i];
        C[i][1] = B[i];
    }

    cout << "Matriz C:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << C[i][0] << " " << C[i][1] << endl;
    }

    return 0;
}
