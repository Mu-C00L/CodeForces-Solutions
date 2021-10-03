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
        int size = n*2;
        ll arr[size];
        for(int i=0;i<size;i++)
        cin>>arr[i];
        ll temp;
        sort(arr,arr+size);
        if(n>=2)
        {
            for(int i=1;i<size-1;i++)
            {
                if(arr[i]==(arr[i-1]+arr[i+1])/2)
                {
                    temp=arr[i];
                    arr[i]=arr[i-1];
                    arr[i-1] = temp;
                }
            }
        }
        if(arr[0]==(arr[size-1]+arr[1])/2)
        {
            temp=arr[0];
            arr[0]=arr[1];
            arr[1] = temp;
        }
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
 
    return 0;
}