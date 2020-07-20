#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	string str;
	cin>>str;
	int arr[10] = {0};
	for(ll i=0;i<n;i++)
	{
		
		if(str[i] == 'L')
		{
			for(int i=0;i<10;i++)
			{
				if(arr[i]==0)
				{
					arr[i]++;
					break;
				}
			}
		}
		else if(str[i] == 'R')
		{	for(int i=9;i>=0;i--)
			{
				if(arr[i]==0)
				{
					arr[i]++;
					break;
				}
			}
			
		}
		else
		{
			arr[str[i]-'0'] = 0;
		}
		
	}
	for(int i=0;i<10;i++)
	cout<<arr[i];
	
	return 0;
}
