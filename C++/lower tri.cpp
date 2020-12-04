#include <iostream>
using namespace std;
int main()
{
	int a[3][3],i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<"enter the matrix ["<<i<<"]["<<j<<"]";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if(i>j)
			{
				cout<<a[i][j];
			}
		}
	}
return 0;
}
