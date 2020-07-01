#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    
    map<string,int>username;
    string s;
    while(n--)
    {
        cin>>s;
        if(username.count(s)==0)
        {
            cout<<"OK"<<endl;
            username[s]=1;
        }
        else
        {
            cout<<s<<username[s]<<endl;
            username[s] += 1;
        }
    }
    return 0;
}