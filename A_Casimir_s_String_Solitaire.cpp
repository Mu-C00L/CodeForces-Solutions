#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int acnt=0,bcnt=0,ccnt=0;
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='A')
            acnt++;
            else if(str[i]=='B')
            bcnt++;
            else
            ccnt++;
        }
        if((acnt+ccnt)==bcnt)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
   
 
    return 0;
}