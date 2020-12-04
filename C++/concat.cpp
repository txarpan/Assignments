#include <bits/stdc++.h> 
  
using namespace std; 
  
#define M 2 
#define N 2 
void mergeMatrix(int A[M][N], 
                 int B[M][N]) 
{ 
    int C[M][2 * N]; 
    for (int i = 0; i < M; i++) { 
        for (int j = 0; j < N; j++) { 
            C[i][j] = A[i][j]; 
            C[i][j + N] = B[i][j]; 
        } 
    }  
    for (int i = 0; i < M; i++) { 
        for (int j = 0; j < 2 * N; 
             j++) 
            cout << C[i][j] << " "; 
        cout << endl; 
    } 
} 
int main() 
{ 
    int A[M][N] = { { 1, 2 }, 
                    { 3, 4 } }; 
  
    int B[M][N] = { { 5, 6 }, 
                    { 7, 8 } }; 
    mergeMatrix(A, B); 
  
    return 0; 
} 
