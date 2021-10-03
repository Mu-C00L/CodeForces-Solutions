#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    cin>>arr[0];
    int maxi=arr[0];
    int idx=0;
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>=maxi)
        {
            maxi=arr[i];
            idx=i;

        }
    }
    if(maxi>m)
    cout<<idx+1;
    else
    cout<<n;

 
    return 0;
}