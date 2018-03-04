#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,i,b,count;
	while(scanf("%lld %lld",&n,&m)==2)
	{
			if(n==0 && m==0) break;
		count=0;
		for(i=n;i<=m;i++)
		{
			b=sqrt(i);
			if(i==(b*b))
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
