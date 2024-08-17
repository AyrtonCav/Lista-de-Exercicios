#include <iostream>

using namespace std;

int main() {
    const int linhas = 4;
    const int colunas = 5;
    int matriz[linhas][colunas];

    cout << "Digite 20 elementos inteiros para a matriz de 4 linhas por 5 colunas:" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz 4x5:" << endl;
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
