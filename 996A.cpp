#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
	int arr[] = {100,20,10,5,1};
	int dp[5];
	int  ans=0;
	for(int i=0;i<5;i++)
	{
		dp[i] = n/arr[i];
		n = n-dp[i]*arr[i];
		ans = ans+dp[i];
	}
	cout<<ans;
	return 0;
}