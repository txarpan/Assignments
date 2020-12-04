#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[],int n)
{
	int maximum=arr[0],i;
	for(i=1;i<n;i++)
	maximum=max(maximum,arr[i]);
	return maximum;
}
void count_sort(int arr[],int n,int place)
{
	int output[n]={0};
	int count[10]={0};
   int i;
   for(i=0;i<n;i++)
   {
   	count[(arr[i]/place)%10]++;
	}
	for(i=1;i<10;i++)
	count[i]=count[i-1]+count[i];
	for(i=n-1;i>=0;i--)
	{
		output[count[(arr[i]/place)%10]-1]=arr[i];
		count[(arr[i]/place)%10]--;
	}
	for(i=0;i<n;i++)
	arr[i]=output[i];
}
void radixsort(int arr[],int n)
{
   int mx=getmax(arr,n),i;
   int place=1;
   while(mx)
   {
   	count_sort(arr,n,place);
   	for(i=0;i<n;i++)
   	cout<<arr[i]<<" ";
   	cout<<endl;
   	place=place*10;
   	mx/=10;
	}
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cin>>n;
	int i,arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	radixsort(arr,n);
}
