#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    map<int ,pair<int,pair<int,string>>>mp;
    while(t--)
    {
        int n;
        cin>>n;
        string ans="";
        int track=1,init=1;
        if(mp.find(n)==mp.end())
        {
            for(int i=0;i<2*n;i++)
            {
                if(i%2==0)
                    ans+='(';
                else
                    ans+=')';
            }
            cout<<ans<<endl;
        }
        else
        {
            
            track=mp[n].first;
            init=mp[n].second.first;
            ans=mp[n].second.second;
            
            swap(ans[track],ans[track+1]);
            cout<<ans<<endl;
            track+=2;
            if(track>2*(n-2))
            {
                init++;
                track=init;
            }
        }
        mp[n].first=track;
        mp[n].second.first=init;
        mp[n].second.second=ans;
        for(int i=1;i<n;i++)
        {
            swap(ans[track],ans[track+1]);
            cout<<ans<<endl;
            track+=2;
            if(track>2*(n-2))
            {
                init++;
                track=init;
            }
        }
        mp[n].first=track;
        mp[n].second.first=init;
        mp[n].second.second=ans;
    }
 
    return 0;
}