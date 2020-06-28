#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll n;
	cin>>n;
	ll arr[n],ans=0;
	for(ll i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n,greater<ll>());
	for(ll i=0;i<n-1;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			arr[j]--;
			if(arr[j]<0)
			arr[j]=0;
		}
	}
	for(ll i=0;i<n;i++)
	ans += arr[i];
	cout<<ans;
	return 0;
	
}