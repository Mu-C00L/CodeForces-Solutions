#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll n, t, c,ways=0,len=0,sever;
	cin>>n>>t>>c;
	for(ll i=0;i<n;i++)
	{
		cin>>sever;
		if(sever<=t)
		len++;
		else
		len=0;
		if(len>=c)
		ways++;
	}
	cout<<ways;
	
	
	return 0;
	
	
}