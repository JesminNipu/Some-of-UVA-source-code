#include<bits/stdc++.h>
bool flag[10000000];
long long int List[200000],primes[10000017]; 
int listSize,cnt,loc;   
using namespace std;

void sieve(int n)
{
cnt=0;
primes[cnt++]=2;
for(int i=3;i<=n;i+=2)
{
if(flag[i]==0)
{
primes[cnt++]=i;
}
if(i<=n/i)
{
for(int j=i*i;j<=n;j+=2*i)
{
flag[j]=1;
}
}
}
return ;
}

void primeFactorize(long long int n,int loc)
{
listSize=0;
for(int i=0;i<loc;i++)
{
if(n%primes[i]==0)
{
while(n%primes[i]==0)
{
n/=primes[i];
List[listSize++]=primes[i];
}
}
}
if(n>1)
List[listSize++]=n;
return ;
}
int main()
{
long long int n;
sieve(10000000);
while(scanf("%lld",&n)==1)
{
loc=0;
if(n==0)
return 0;
else if(n<0)
n=(-1)*n;

for(int i=0;i<cnt;i++)
{
if(primes[i]<=sqrt(n))
loc++;
else
break;
}
primeFactorize(n,loc);
//cout<<"pos"<<pos<<endl;
if(listSize <= 1 || List[listSize-1]-List[0]==0)
printf("-1\n");
else
printf("%lld\n",List[listSize-1]);
}
return 0;
}
