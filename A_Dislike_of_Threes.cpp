#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int arr[1001];
    int k=1;
    for(int i=0;i<1001;i++)
    {
        while(k%3==0 || k%10==3)
        k++;
        arr[i]=k;
        k++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<arr[n-1]<<endl;
    }

    
 
    return 0;
}