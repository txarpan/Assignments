#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
	int i,j,min_index,k;
	for(i=0;i<n-1;i++)
	{
		min_index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min_index]>arr[j])
			min_index=j;
		}
		int t=arr[i];
		arr[i]=arr[min_index];
		arr[min_index]=t;
		for(k=0;k<n;k++)
		cout<<arr[k]<<" ";
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	cin>>arr[i];
	selection_sort(arr,n);
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
