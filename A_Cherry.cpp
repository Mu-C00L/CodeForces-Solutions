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
        ll arr[n];
        cin>>arr[0];
        ll maxi=INT_MIN;
        for(int i=1;i<n;i++)
        {
            ll prod=1;
            cin>>arr[i];
            prod=arr[i]*arr[i-1];
            maxi=max(prod,maxi);

        }
        cout<<maxi<<endl;
        
    }
 
    return 0;
}