#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll arr[n],brr[n],pos[n];
	map<int, int>off;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		pos[arr[i]]=i;
	}
	for(ll i=0;i<n;i++)
	cin>>brr[i];
	for(ll i=0;i<n;i++)
	{
		ll curr = pos[brr[i]] -i;
		if(curr < 0)
		curr += n;
		off[curr]++;
	}
	int ans = 0;
	for(auto &it:off)
	ans = max(ans, it.second);
	cout<<ans;
	return 0;
}
