#include <iostream>

using namespace std;

int main() {
    const int tamanho = 12;
    double A[tamanho], B[tamanho], C[tamanho][2];

    cout << "Digite 12 elementos reais para a matriz A:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> A[i];
    }


    cout << "Digite 12 elementos reais para a matriz B:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> B[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        C[i][0] = A[i] * 2;       
        C[i][1] = B[i] - 5;
    }

    cout << "Matriz A:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Matriz B:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Matriz C:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << C[i][0] << " " << C[i][1] << endl;
    }

    return 0;
}
