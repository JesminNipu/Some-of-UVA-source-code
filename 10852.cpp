#include <stdio.h>
#include<iostream>
#include<math.h>
#define MAX 10001
using namespace std;
bool flag[MAX];
int primes[MAX];
int cnt;

void sieve(int n)
{
cnt=0;
primes[cnt++] = 2;
for(int i=3; i<=n; i+=2)
{
if(flag[i] == 0)
{
primes[cnt++] = i;
if(i <= n/i)
{
for(int j=i*i; j<=n; j+=i*2) 
flag[j] = 1;
}
}
}
return ;
}
int main()
{
    int tc, n;
    
    sieve(MAX);
    
    scanf("%d",&tc);
    while ( tc-- )
    {
        scanf("%d",&n);
        int ans = primes[0];
        for (int i=0; i<cnt && primes[i]<=n; i++)
            if ( n % primes[i] > n % ans )
            printf("v=%d\tm=%d\n",n % primes[i],n % ans);
                ans = primes[i];
       /// printf("%d\n",ans);
    }
    
    return 0;
}
