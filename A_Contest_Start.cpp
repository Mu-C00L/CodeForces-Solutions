#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,k;
        cin>>n>>x>>k;
        ll dissat=0;
        ll z=floor(k/x);
        //cout<<z<<" ";
        if(z>n)
            cout<<(n-1)*n/2<<"\n";
        else
        {
            ll ans=z*n;
            ans-=z*(z+1)/2;
            cout<<ans<<endl;
        }
    }
    
    
 
    return 0;
}