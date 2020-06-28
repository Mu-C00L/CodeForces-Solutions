#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int arr1[n],arr2[n],arr3[n];
	int j=0,k=0,l=0;
	int cnt1=0,cnt2=0,cnt3=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
		{
			cnt1++;
			arr1[j]=i;
			j++;
		}
		else if(arr[i]==2)
		{
			cnt2++;
			arr2[k]=i;
			k++;
		}
		else
		{
			cnt3++;
			arr3[l]=i;
			l++;
		}
	}
	int mn=min(cnt1,min(cnt2,cnt3));
	cout<<mn<<endl;
	for(int i=0;i<mn;i++)
	{
		cout<<arr1[i]+1<<" "<<arr2[i]+1<<" "<<arr3[i]+1<<endl;
	}
	return 0;
	
}