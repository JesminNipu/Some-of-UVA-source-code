#include <stdio.h>
#include<iostream>
using namespace std;
bool flag[1005];
int primes[1005];
int cnt;
void seive(int n)
{
cnt=0;
primes[cnt++] = 1;
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
return ;
}

int main()
{
	int n,c,res,hi,lo,m;
	while(cin>>n>>c)
	{
		
		if( n==1)
		{
			printf("%d %d: %d\n\n",n,c,n);
		}
		else
		{
			seive(n);
		if(cnt%2==1)
		{
			res=2*c-1;
		}
     	else
		{
			res=2*c;
		}
		
		if(res<=cnt)
		{
			printf("%d %d:",n,c);
			m=(cnt-res)/2;
			for(int i=0;i<res;i++)
			
			printf(" %d",primes[m++]);
			printf("\n\n");
		}
	
		else
		{
			printf("%d %d:",n,c);
			for(int j =0;j<cnt;j++)
			
				 printf(" %d",primes[j]);
         			printf("\n\n");
			
		}


		/*{
		hi=2*c;
		lo=2*c + 2;
		for( int i=hi;i<=lo;i++)
		{
			cout<<primes[i] ;
		}
		cout<<"\n";	
	}*/
	
		
		}
	}
	return 0;
}
