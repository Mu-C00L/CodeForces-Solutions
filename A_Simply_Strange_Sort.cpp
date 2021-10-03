#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool issorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;

}
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
       cin>>arr[i];
       int k=0,ans=0;
       while(!issorted(arr,n))
       {
           if(k%2==0)
           {
                for(int i=0;i<n;i+=2)
                {
                    if(arr[i]>arr[i+1])
                    swap(arr[i],arr[i+1]);
                }
                k++;
           }
           else
           {
               for(int i=1;i<n;i+=2)
                {
                    if(arr[i]>arr[i+1])
                    swap(arr[i],arr[i+1]);
                }
                k++;
           }
       }
       cout<<k<<endl;
   }
 
    return 0;
}