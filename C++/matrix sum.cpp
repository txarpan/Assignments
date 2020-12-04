#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	cout<<"enter the value of matrix a";
	for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter the first matrix elements["<<i<<"]["<<j<<"]";
			cin>>a[i][j];
		}
	}
	
	cout<<"enter the value of matrix b";
	for (i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter the first matrix elements["<<i<<"]["<<j<<"]";
			cin>>b[i][j];
		}
	}
	cout<<"the value of sum of matrix is"<<endl;
	for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}

