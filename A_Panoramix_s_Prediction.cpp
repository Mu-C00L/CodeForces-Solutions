#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m;
    while (~scanf("%d %d", &n, &m))
    {
        for (int i = 0; i < 15; i++)
        {
            if (a[i] > n)
            {
                if (a[i] == m)
                {
                    printf("YES\n");
                    return 0;
                }
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}