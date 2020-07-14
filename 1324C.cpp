#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		ll k = str.length() + 1;
		vector<int>pos;
		pos.push_back(0);
		for(ll i=0;i<str.length();i++)
		{
			if(str[i]=='R')
			pos.push_back(i+1);
			
		}
		pos.push_back(str.size()+1);
		int ans=0;
		for(ll i=0;i<int(pos.size())-1;i++)
		{
			ans = max(ans,pos[i+1]-pos[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
