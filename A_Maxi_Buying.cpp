#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    float n;
    cin>>n;
    int mrp = floor(n*1.08);
    // cout<<mrp<<" ";
    if(mrp<206)
        cout<<"Yay!";
    else if(mrp==206)
        cout<<"so-so";
    else
        cout<<":(";
 
    return 0;
}