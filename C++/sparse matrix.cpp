#include<iostream>
using namespace std;
#define MAX 50

int no=0;

void append_matrix(int arr[20][20],int rows,int columns)
{
	int i,j;
	
	for(i=0;i<rows;i++)
	{
			for(j=0;j<columns;j++)
			{
				cout<<"\nEnter value of element ["<<i+1<<","<<j+1<<"]:";
				cin>>arr[i][j];
			}
	}
}

void create_sparse(int row,int column,int val,int size)
{
	int sparse[MAX][3];
	
	sparse[size][0]=row;
	sparse[size][1]=column;
	sparse[size][2]=val;
	
	
	
	cout<<sparse[size][0]<<"\t"<<sparse[size][1]<<"\t"<<sparse[size][2];
	cout<<endl;
}


int main (void)
{
	int max[20][20],r,c,count=0,i,j;
	
	cout<<"\nEnter the number of rows and columns of the matrix-";
	cin>>r>>c;
	
	append_matrix(max,r,c); 
	
	cout<<"\nYour entered matrix is-\n";
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<max[i][j]<<"\t";
		}
		
		cout<<endl;
	}
	
	cout<<"\nThe sparse matrix is-\n";
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(max[i][j]!=0)
			{
				count++;
				create_sparse(i,j,max[i][j],count);
			}
		}
	}
	
	return 0;
}
