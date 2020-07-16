#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		set<int>st;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			st.insert(a);
		}
		if(st.size()>k)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<n*k<<endl;
			for(int i=0;i<n;i++)
			{
				for(int b:st)
				cout<<b<<" ";
				for(int j=0;j<k-(int)st.size();j++)
				cout<<1<<" ";
			}
			cout<<endl;
		}
		
		
		
	}
	return 0;
	
}
