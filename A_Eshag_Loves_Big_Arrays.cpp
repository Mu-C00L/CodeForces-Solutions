#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[0])
            ans++;
        }
        cout<<ans<<endl;
    }
 
    return 0;
}