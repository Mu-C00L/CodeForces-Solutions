#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h;
        cin>>n>>h;
        int maxi2,maxi;
        int x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        maxi=arr[0];
        maxi2=arr[1];
        int ans=0;
        ans=h/(maxi+maxi2);
        ans*=2;
        int k =h%(maxi+maxi2);
        if(k>0)
        {
            k-=maxi;
            ans+=1;
            if(k>0)
            {
                k-=maxi2;
                ans+=1;
            }
        }

        cout<<ans<<endl;

    }
   
 
    return 0;
}