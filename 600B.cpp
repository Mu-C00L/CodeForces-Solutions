#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll n,m;
	cin>>n>>m;
	ll arr[n],brr[m];
	for(ll i=0;i<n;i++)
	cin>>arr[i];
	for(ll i=0;i<m;i++)
	cin>>brr[i];
	ll cnt[m]={0};
	sort(arr,arr+n);
	for( ll i=0;i<m;i++)
	{
		cout<<upper_bound(arr,arr+n,brr[i])-arr<<" ";
	}
	return 0;
}