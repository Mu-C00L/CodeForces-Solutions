#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll temp=1;
       while(true)
       {
           if(temp*2>n)
           {
               cout<<temp-1<<endl;
               break;
           }
           temp*=2;
       }
    }
 
    return 0;
}