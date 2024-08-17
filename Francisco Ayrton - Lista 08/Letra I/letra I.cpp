#include <iostream>

using namespace std;

int main() {
    const int tamanho = 7;
    int A[tamanho][tamanho], B[tamanho][tamanho];

    cout << "Digite os elementos da matriz A (7x7):" << endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if (i == j) {

                if ((i + 1) % 2 != 0) { 
                    int fatorial = 1;
                    for (int k = 1; k <= A[i][j]; ++k) {
                        fatorial *= k;
                    }
                    B[i][j] = fatorial;
                } else {
             
                    int soma = 0;
                    for (int k = 1; k <= A[i][j]; ++k) {
                        soma += k;
                    }
                    B[i][j] = soma;
                }
            } else {
  
                int soma = 0;
                for (int k = 1; k <= A[i][j]; ++k) {
                    soma += k;
                }
                B[i][j] = soma;
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
