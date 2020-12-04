#include <iostream> 
  
using namespace std; 
void EvenOddSum(int arr[], int n) 
{ 
    int even = 0; 
    int odd = 0; 
    for (int i = 0; i < n; i++) { 
        if (i % 2 == 0) 
            even += arr[i]; 
        else
            odd += arr[i]; 
    } 
  
    cout << "Even index positions sum " << even; 
    cout << "\nOdd index positions sum " << odd; 
}  
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    EvenOddSum(arr, n); 
    return 0; 
} 
