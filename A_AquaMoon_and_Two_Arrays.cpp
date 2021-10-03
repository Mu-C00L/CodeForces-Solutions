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
        int a[n],b[n];
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        if(sum1!=sum2)
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                    
                }
            }
                
        }
    }
    
 
    return 0;
}