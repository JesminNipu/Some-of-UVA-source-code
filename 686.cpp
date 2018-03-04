#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
bool flag[20000005];
int primes[20000000];
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

    int n,i,j,count,l,c;
    sieve(33000);
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        count=0;
        c =0;
        
        for(i=0; i<cnt; i++)
        {
            for(j=0; j<cnt; j++)
            {
                if(primes[i]==primes[j]&& primes[i]+primes[j]==n)
                {
                    c++;
                }
                else if(primes[i]+primes[j]==n)
                {
                    count++;
                }
				
                if(primes[i]+primes[j]>n)
                    break;
            }
        }
        count = count/2 +c;
        printf("%d\n",count);
    
    }
    return 0;
}
