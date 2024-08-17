#include <iostream>
using namespace std;

int main(){

    int A[5][3];
    int B[5][3];
    int C[5][3];
    int num_A = 10;
    int num_B = 20;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            A[i][j] = num_A++;
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            B[i][j] = num_B++;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j]; 
        }
        
    }
    
      cout << "Matriz C (soma de A e B):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}