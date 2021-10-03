#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll temp=gcd(a,b);
        ll ans=abs(a-b);
        cout<<ans<<" ";
        ll maxi=max(a,b);
        ll mini=min(a,b);
        if(maxi==mini || gcd(maxi,mini)==ans)
            cout<<0<<endl;
        else
        {
            // if(mini<ans)
            // cout<<mini<<endl;
            // else
            ll mod=maxi%ans;
            cout<<min(mod,ans-mod)<<endl;

        }
    }
    
 
    return 0;
}