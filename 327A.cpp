#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	int n,num,cnt1=0,cnt0=0,mxcnt=-1;
	cin>>n;
	while(n--)
	{
		cin>>num;
		if(num==1)
		{
			cnt1++;
			if(cnt0>0)
			cnt0--;
		}
		else
		{
			cnt0++;
			if(cnt0>mxcnt)
			mxcnt=cnt0;
		}
	}
	cout<<cnt1+mxcnt;
	return 0;
	
	
	
	
}