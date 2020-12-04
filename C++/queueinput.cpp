#include <iostream>
#include <queue>
using namespace std;

int compare (queue<int> Q1, queue<int> Q2)
{
    int flag=1;
    if (Q1.size()!=Q2.size()) // Check if size of both queues are same
    {
        flag=0;
        return flag;
    }
    while (!(Q1.empty())) // Until the queues not empty compare top of both ques
    {
        if (Q1.front()==Q2.front()) // If the top of both ques are same pop top of both ques
        {
            Q1.pop();
            Q2.pop();
        }
        else
        {
            flag=0;
            break;
        }
    }
}

int main()
{
    queue<int> Q1;
    queue<int> Q2;
    int m,n,val;
    int a[50],b[50];
    cout<<"Enter size of first que: ";
    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>a[i];
        Q1.push(a[i]);
    }
    cout<<"Enter size of second que: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        Q2.push(a[i]);
    }
    if (compare(Q1, Q2))
        cout << "Both ques are Same";
    else
        cout << "ques are not Same";
    return 0;
}
