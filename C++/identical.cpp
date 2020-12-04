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
		if(i==j & a[i][j]!=1)
		{
			f=1;
			break;
		}
		else if (i!=j & a[i][j]!=0)
		{
			f=1;
			break;
		}
	}
	
	if(f==0)
	{
		cout<<"the matrix is  identical";
	}
	else
	{
		cout<<"the matrix is not identical";
	}
}
return 0;
}
