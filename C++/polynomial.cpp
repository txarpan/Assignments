#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    return a==0? b: gcd(b%a,a);
}

int Content(int arr[],int n)
{
    int ans=arr[0];
    for(int i=1;i<n;i++)
        ans=gcd(ans,arr[i]);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Content of polinomial is: "<<Content(arr,n)<<endl;

    return 0;
}
