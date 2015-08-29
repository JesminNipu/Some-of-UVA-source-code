#include <bits/stdc++.h>
using namespace std;
int main()
{	float h,m,ans,i,j;
	while(scanf("%f:%f",&h,&m)==2)
	{
		if(h==0 and m==0) break;;
             i=h*30+(m/60)*30;
             j=m*6;
             ans=(i-j);
			 if(ans<0)
			ans=ans*(-1);
              if (ans>180)
              ans=360-ans;

              printf("%.3lf\n",ans);
          }
    
    return 0;
}
