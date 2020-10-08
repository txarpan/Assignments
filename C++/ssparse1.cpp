#include<iostream>
using namespace std;
int main()
{
int a[3][3],i,j,f=0;
cout<<"Enter the matrix";
for (i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		cin>>a[i][j];
	}
}
for (i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(a[i][j]==0)
		{
			f++;
		}
		
	}
	
	if(f<=3*3/2)
	{
		cout<<"the matrix is  sparse";
	}
	else
	{
		cout<<"the matrix is not not sparse";
	}
}
return 0;
}
