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
        int temp=0,t1=1,t2=2,ans1=0,ans2=0;
        while(temp<n)
        {
            temp+=t1;
            t1+=2;
            ans1++;
        }
        temp=0;
        while(temp<n-1)
        {
            temp+=t2;
            t2+=2;
            ans2++;
        }
        cout<<max(ans1,ans2)<<endl;

    }
    
 
    return 0;
}