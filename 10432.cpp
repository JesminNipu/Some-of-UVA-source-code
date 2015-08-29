#include <bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
int main()
{
	 double r ,n,a,ans;
	while(scanf("%lf %lf",&r,&n)==2)
	{
		a=(r*r*sin(2*PI/n))/2;
		ans=n*a;
	printf("%.3lf\n",ans);
	
	}
	return 0;
}
