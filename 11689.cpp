#include <bits/stdc++.h>
using namespace std;
int main()
{
	int e,f,t,div,ate,val,c,rem;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&e,&f,&c);
		ate=0;
		val=e+f;
		while(val>=c)
		{
		
			div=val/c;
			
			ate+=div;
			
			rem=val%c;
		
			val=div+rem;
		
		}
		printf("%d\n",ate);
	}
	return 0;
}
