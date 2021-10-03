#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        int mini=arr[0],maxi=arr[0];
        int minidx=0,maxidx=0;
        for(int i=1;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                maxidx=i;
            }
            if(arr[i]<mini)
            {
                mini=arr[i];
                minidx=i;
            }
        }
        int great=  max(minidx,maxidx);
        int less=min(minidx,maxidx);
        int p1 = (n-less);
        int p2 = great+1;
        int p3 = less+1+n-great;
        cout<<min(p1,min(p2,p3))<<endl;
    } 
    return 0;
}