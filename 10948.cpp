#include <stdio.h>
#include<iostream>
#include<math.h>
#define max 1000005
using namespace std;

bool flag[max];
int primes[max];
int cnt;
int sieve(int z)
{
    int i,j;
    for(i=2; i<=max; i++)
    {
        primes[i]=1;
    }
    for(i=2; i<=sqrt(max); i++)
    {
        for(j=2; i*j<=max; j++)
        {
            primes[i*j]=0;
        }
    }
}

int main()
{
     int count,b,k,n;
    sieve(max);
    while(scanf("%d",&n) && n)
    {
    
        count=0;
        for(k=2; k<n; k++)
        {
            b=n-k;
            if(primes[b]&& primes[k])
            {
                count++;
                break;
            }
        }
        if(count>0)
        {
            printf("%d:\n",n);
            printf("%d+%d\n",k,b);
        }
        else
        {
            printf("%d:\n",n);
            printf("NO WAY!\n");
        }
    }
    return 0;
}
