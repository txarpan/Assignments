#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,x;
    stack<int> s1,s2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s1.push(x);
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        s2.push(x);
    }

    bool same=true;
    while(!s1.empty() && !s2.empty())
    {
        n=s1.top(); m=s2.top();
        s1.pop(); s2.pop();
        if(n!=m) {same=false; break;}
    }
    if(!s1.empty() || !s2.empty()) same=false;
    if(same) cout<<"The two stacks are same";
    else cout<<"The two stacks are not same";
    return 0;
}
