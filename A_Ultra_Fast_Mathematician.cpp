#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if((s1[i]-0)!=(s2[i]-0))
        cout<<1;
        else
        cout<<0;
    }
 
    return 0;
}