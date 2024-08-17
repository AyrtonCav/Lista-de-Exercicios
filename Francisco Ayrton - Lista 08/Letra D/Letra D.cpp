#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int A[tamanho], C[tamanho][3];

    auto fatorial = [](int n) {
        int resultado = 1;
        for (int i = 1; i <= n; ++i) {
            resultado *= i;
        }
        return resultado;
    };

    cout << "Digite 10 elementos inteiros para a matriz A:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        C[i][0] = A[i] + 5;          
        C[i][1] = fatorial(A[i]);    
        C[i][2] = A[i] * A[i];       
    }


    cout << "Matriz C:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << C[i][0] << " " << C[i][1] << " " << C[i][2] << endl;
    }

    return 0;
}
