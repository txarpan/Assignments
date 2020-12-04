#include<iostream>
int main()
{
int a[3][3],i,j,c=0;
for(i=0;i<3;i=0)
{
	for(j=0;j<3;j++)
	{
		cin<<a[i][j];
	}
}
for(i=0;i<3;i=0)
{
	for(j=0;j<3;j++)
	{
		if(a[i][j]==0)
		{
			c++;
		}
	}
}
if(c<=3*3/2)
{
	cout<<"the matrix is sparse";
	for(i=0;i<3;i=0)
	{
		for(j=0;j<3;j++)
		{
		cout<<a[i][j]" "<<endl;
		}
	}
	

}
else()
{
	cout<<"the given matrix is not a sparse matrix"<<endl;
}
return 0;
}

