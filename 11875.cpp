#include <bits/stdc++.h>
using namespace std;
int a[150];
int main()
{
int b,c,n,i,j=0,m,T;
	cin>>T;
	{
		
		while(T--)
		{
		j++;	
			cin>>m;
			for(i=0;i<m;i++)
			{
				cin>>a[i];
				if(i==m/2)
				c=a[i];
				
			}
			printf("Case %d: %d\n",j,c);
		}
		
	}
	return 0;
}
