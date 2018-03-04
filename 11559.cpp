#include <bits/stdc++.h>
using namespace std;
int main()
{
	 int p,b,h,w,price,i,a,j,s;
	
	while(scanf("%d %d %d %d",&p,&b,&h,&w)==4)
	{
		int cost=15000000;
		for(i=0;i<h;i++)
		{
		
			scanf("%d",&price);
			for(j=0;j<w;j++)
			{
				scanf("%d",&a);
				s=0;
			 if(a>=p)
				{
					s=price*p;
					if(cost>s)
					cost=s;
				}
			}
			
		}
		if(cost<=b)
			cout<<cost<<endl;
			else
			cout<<"stay home"<<endl;
	}
	return 0;
}
