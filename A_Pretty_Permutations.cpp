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
        int arr[n];
        for(int i=0;i<n;i++)
        arr[i]=i+1;
        if(n%2==0)
        for(int i=0;i<n;i+=2)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        else
        for(int i=0;i<n-1;i+=2)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        if(n%2==1)
        {
            int temp=arr[n-1];
            arr[n-1]=arr[n-3];
            arr[n-3]=temp;
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

        cout<<endl;
    }
 
    return 0;
}