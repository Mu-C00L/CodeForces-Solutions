#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ans=0;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll minpr = arr[n-1];
		for(ll i=n-2;i>=0;i--)
		{
			if(arr[i]>minpr)
			ans++;
			minpr = min(arr[i],minpr);
			
		}
		cout<<ans<<endl;
	}
	
}
