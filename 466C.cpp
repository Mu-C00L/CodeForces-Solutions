#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll arr[n],sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		sum += arr[i];
		
	}
	
	if(sum%3!=0)
	cout<<0<<endl;
	else
	{
		ll temp = 0;
		ll splitsum=sum/3;
		ll pos[n];
		
		for(ll i=0;i<n;i++)
		{
			if(i==0)
			pos[0]=0;
			else
			pos[i]= pos[i-1];
			temp += arr[i];
			if(splitsum == temp)
			pos[i]++;
			
		}
		temp = 0;
		ll ways =0;
		for(ll i=n-1;i>=2;i--)
		{
			temp += arr[i];
			if(temp==splitsum)
			ways += pos[i-2];
		}
		cout<<ways<<endl;
	}
	return 0;
	
}
