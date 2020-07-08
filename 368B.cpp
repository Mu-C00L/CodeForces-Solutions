#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,m,temp;
	set<ll>st;
	cin>>n>>m;
	ll arr[n+1],brr[n+1];
	for(ll i=1;i<=n;i++)
	cin>>arr[i];
	for(ll i=n;i>=1;i--)
	{
		st.insert(arr[i]);
		brr[i]=st.size();
	}
	for(ll i=0;i<m;i++)
	{
		cin>>temp;
		cout<<brr[temp]<<endl;
	}
	return 0;
}
