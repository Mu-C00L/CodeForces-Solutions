#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	ll brr[n-1];
	for(int i=0;i<n-1;i++)
	cin>>brr[i];
	sort(brr,brr+(n-1));
	ll crr[n-2];
	for(int i=0;i<n-2;i++)
	cin>>crr[i];
	sort(crr,crr+(n-2));
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		{
			cout<<arr[n-1]<<endl;
			break;
		}
		else if(arr[i]!=brr[i])
		{
			cout<<arr[i]<<endl;
			break;
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(i==n-2)
		{
			cout<<brr[n-2]<<endl;
			break;
		}
		else if(brr[i]!=crr[i])
		{
			cout<<brr[i]<<endl;
			break;
		}
	}
	return 0;
}
