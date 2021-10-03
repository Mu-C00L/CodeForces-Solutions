#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    int temp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
    }
    int ans=0;
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%(n+1) != 1)
        ans++;
        //cout<<sum+i<<" ";
    }
    cout<<ans;
 
    return 0;
}