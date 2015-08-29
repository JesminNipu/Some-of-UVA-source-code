#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int d,q;
    int i,count,j,bn[1000];
    while(scanf("%lu",&d)==1)
    {
        if(d==0) break;
		i=0;
		q=d;
		
        while(q!=0)
        {
            bn[i++]= q%2;
            q/=2;
        }
        count=0;
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
        {
            printf("%d",bn[j]);
            if(bn[j]==1)
            count++;
        }
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
