#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
bool flag[20000005];
int primes[20000000];
int tprimes[20000000];
int cnt,m=0;

void sieve(int n)
{
cnt=0;
primes[cnt++]=2;
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
for(int i=1;i<=cnt;i++)
{
	if(primes[i+1]-primes[i]==2)
	{
		m++;
	tprimes[m]=primes[i];
	
	}
}
return ;
}


int main()
{

    int n,i,j,count,l,c;
    sieve(20000000);
    while(scanf("%d",&n)==1)
    {
   	cout<<"("<<tprimes[n]<<", "<<tprimes[n]+2<<")"<<endl;
    }
  return 0;
}
