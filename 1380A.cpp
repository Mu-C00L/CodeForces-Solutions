#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		int cond = 0;
		for(int i=1;i<n-1;i++)
		{
			if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
			{
				cond = 1;
				cout<<"YES"<<endl;
				cout<<i<<" "<<i+1<<" "<<i+2<<endl;
				break;
			}
		}
		if(cond != 1)
		cout<<"NO"<<endl;
		
		
		
	}
	return 0;
}