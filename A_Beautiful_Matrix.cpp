#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int mat[5][5];
    int x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(2-x)+abs(2-y);
 
    return 0;
}