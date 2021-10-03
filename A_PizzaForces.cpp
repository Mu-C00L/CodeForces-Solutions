#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<=6)
        cout<<15<<endl;
        else if(n%2==0)
        cout<<((n/2 )*5)<<endl;
        else
        cout<<(((n+1)/2 )*5)<<endl;
    }
 
    return 0;
}