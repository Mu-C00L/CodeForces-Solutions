#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str;
    cin>>str;
    int flag=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            flag=1;
            break;
        }
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 
    return 0;
}