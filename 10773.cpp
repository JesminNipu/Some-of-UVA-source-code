#include <bits/stdc++.h>
using namespace std;
int main()
{
	double d,u,v,t1,t2;
	int count,n;
	cin>>n;
	count=1;
	while(n--)
	{
		
		cin>>d>>v>>u;
		
		 if(u==0 ||v==0 ||u<=v)
		 {
		 	printf("Case %d: can't determine\n",count);
		 	continue;
		 }
		
		
		 t1=d/u;
        t2=d/sqrt(u*u-v*v);
		printf("Case %d: %.3lf\n",count,t2-t1);
		count++;
	}
	return 0;
}
