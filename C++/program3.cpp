#include<iostream>
using namespace std;
int main()
{
	int a[10000],n,i,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		int temp=a[i];
		int j=i;
		while(j>0 && temp<a[j-1])
		{
			a[j]=a[j-1];
			j=j-1;
			count++;
		}
		a[j]=temp;
	}
	cout<<endl;
	cout<<count<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
