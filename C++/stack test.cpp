#include<iostream>
using namespace std;
#define SIZE 5
int stack[SIZE];
int top=-1;
bool isEmpty()
{
	if(top==-1)
		return true;
	else
		return false;
}
void push(int value)
{
	if(isEmpty())
	{
		cout<<"overflow";
	}
	else
	{
		top++;
		stack[top]=value;
	}
}
