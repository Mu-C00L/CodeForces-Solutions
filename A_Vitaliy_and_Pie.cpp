#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int key=0;
    int hash[26]={0};
    for(int i=0;i<2*n-1;i++)
    {
        if(i%2==0)
        hash[str[i]-0-97]++;
        else
        {
            if(hash[str[i]-0-65]==0)
            key++;
            else
            hash[str[i]-0-65]--;
        }

    }
    cout<<key<<endl;
    return 0;
}