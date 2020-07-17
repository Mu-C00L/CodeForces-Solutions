#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n,x,sum=0,l=-1,r;
		cin>>n>>x;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(a%x)
			{
				if(l==-1)
				l=i;
				r=i;
			}
			sum += a;
		}
		if(sum%x)
		cout<<n<<endl;
		else if(l == -1)
		cout<<-1<<endl;
		else
		cout<<n-min(l+1,n-r)<<endl;
	}
	return 0;
}
