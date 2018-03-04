#include <bits/stdc++.h>
using namespace std;
long int ary[2000007];
int main()
{
int n,i,j,k;
    while (scanf("%ld",&n)==1)
    {
        if (n==0)
        {
            break;
        }
        for (i=0;i<n;i++)
        {
            scanf("%ld",&ary[i]);
        }
        sort(ary,ary+n);
        for (i=0;i<n;i++)
        {
            printf("%ld",ary[i]);
            if (i<(n-1))
                printf(" ");
        }
        printf("\n");
    }
    return 0;
	
}
