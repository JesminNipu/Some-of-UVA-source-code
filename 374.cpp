#include <stdio.h>
#include <math.h>


long long int F(long long int N,long long int P,int M)
{
	long long int ret;
	if(P==0) 
	{
		return 1;
	}
	if(P%2==0) 
	{
		 ret=F(N,P/2,M);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(F(N,P-1,M)%M))%M;
}
int main()
{
	long long int N,P;
	int M;
	while(scanf("%lld %lld %d",&N,&P,&M)==3)


	printf("%d\n",F(N,P,M));
	
	
	return 0;
}
