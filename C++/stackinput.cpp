#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
void print(stack<int> s);
void copy(stack<int> s1,stack<int> s2)
{
	cout<<"before copy:"<<endl;
	print(s1);
	stack<int> s;
	while(!s1.empty())
	{
		s.push(s1.top());
		s1.pop();
	}
	while(!s.empty())
	{
		s2.push(s.top());
		s.pop();
	}
	cout<<"after copy"<<endl;
	print(s2);
}
void print(stack<int> s)
{
	stack<int> s1;
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s1.push(s.top());
		s.pop();
	}
	while(!s1.empty())
	{
		s.push(s1.top());
		s1.pop();
	}
}
int main()
{
	stack<int> s1,s2;
	int i;
	for(i=1;i<=5;i++)
	s1.push(i*10);
	copy(s1,s2);
}
