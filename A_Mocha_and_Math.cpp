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
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int temp;
        ll ans=min((arr[0]&arr[n-1]),arr[0]);
        for(int i=1;i<n;i++)
        {
            temp=(arr[n-1]&arr[i]);
            if(temp<ans)
            ans=temp;

        }
        cout<<ans<<endl;


    }
 
    return 0;
}