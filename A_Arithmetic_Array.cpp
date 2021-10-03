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
        int x;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
        if(sum<n)
            cout<<1<<endl;
        else
            cout<<sum-n<<endl;
    }
 
    return 0;
}