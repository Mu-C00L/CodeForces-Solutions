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
        int oddcnt=0,evencnt=0;
        for(int i=0;i<2*n;i++)
        {
            cin>>x;
            if(x%2==0)
            evencnt++;
            else
            oddcnt++;
        }
        if(evencnt==oddcnt)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
 
    return 0;
}