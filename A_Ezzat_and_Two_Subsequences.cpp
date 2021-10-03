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
        double sum=0;
        int x=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(x<arr[i])
            x=arr[i];
        }
        double ans=x+(double)(sum-x)/(n-1);
        cout<<fixed<<setprecision(9)<<ans<<endl;
        
    }
    
 
    return 0;
}