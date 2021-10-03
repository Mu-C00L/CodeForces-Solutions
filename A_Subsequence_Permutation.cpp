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
        string str;
        cin>>str;
        string temp=str;
        sort(temp.begin(),temp.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(temp[i]!=str[i])
            ans++;
        }

        cout<<ans<<endl;
    }
    
 
    return 0;
}