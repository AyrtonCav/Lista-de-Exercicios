#include <iostream>

using namespace std;

int main() {
    const int linhas = 10;
    const int colunas = 7;
    int A[linhas][colunas];
    int total_pares = 0, total_impares = 0;
    int total_elementos = linhas * colunas;

    cout << "Digite os elementos da matriz A (10x7):" << endl;
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
            } else {
                total_impares++;
            }
        }
    }

    double percentual_pares = (static_cast<double>(total_pares) / total_elementos) * 100;
    double percentual_impares = (static_cast<double>(total_impares) / total_elementos) * 100;

    cout << "Total de elementos pares: " << total_pares << endl;
    cout << "Total de elementos ímpares: " << total_impares << endl;
    cout << "Percentual de elementos pares: " << (int)(percentual_pares) << "." << (int)((percentual_pares - (int)percentual_pares) * 10) << "%" << endl;
    cout << "Percentual de elementos ímpares: " << (int)(percentual_impares) << "." << (int)((percentual_impares - (int)percentual_impares) * 10) << "%" << endl;

    return 0;
}
