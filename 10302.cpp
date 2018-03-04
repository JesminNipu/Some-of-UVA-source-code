#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int k,sum,i,j;
	while(scanf("%lld",&k)==1 && k)
	{
		
		
		sum=(k*k*(k+1)*(k+1))/4;
		printf("%lld\n",sum);
	}
	return 0;
}
