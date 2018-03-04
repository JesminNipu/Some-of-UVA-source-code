#include<bits/stdc++.h>
#define MAX 1000008
using namespace std;
bool flag[MAX];
int primes[MAX];
int cnt,a[2000];

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
	int n,u,l,pos,c,count,max,k,result,j,i;
	sieve(MAX);
	cin>>n;
	while(n--)
	{
	pos=0;
		cin>>l>>u;
for(int i=0;i<cnt;i++)
{
if(primes[i]>=l)
break;
pos++;	
}
memset(a, 0, sizeof(a));
for(j=pos;j<cnt and primes[j+1]<=u;j++)

		//a[primes[j+1] - primes[j]]++;
	{
            a[primes[j+1]-primes[j]]++;
        }
        count=0, max=0;
        for(k=0; k<120; k++)
        {
        		
            if(a[k]>max)
            {
                result=k;
                max=a[k];
                count=1;
            }
            else if(max==a[k])
                count++;
        }
        if(count==1)
        {
            printf("The jumping champion is %d\n", result);
        }
        else
        {
            printf("No jumping champion\n");
        }
    }
    return 0;
}
