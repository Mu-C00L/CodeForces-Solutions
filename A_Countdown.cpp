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
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]-'0')
            {
                ans+=(s[i]-'0');
                ans++;
            }
        }
        if(s[n-1]-'0')
        ans+=(s[n-1]-'0');

        cout<<ans<<endl;
    }

  
 
    return 0;
}