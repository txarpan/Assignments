# include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int n2;
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; ++i)
    {
        cin >> arr2[i];
    }
    int ans[n+n2];
    int j= 0, k = 0, i = 0;
    for (; i < n+n2 ; ++i)
    {
        if(j < n && arr[j] < arr2[k]){
            ans[i] = arr[j];
            j++;
        }
        else{
            ans[i] = arr2[k];
            k++;
        }
        cout << ans[i] << " ";
    }
    return 0;
}