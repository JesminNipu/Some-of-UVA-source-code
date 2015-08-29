#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n,c,a[51],i;
	cin>>tc;
	for(int j=1;j<=tc;j++)
	{
		
		cin>>n;
		int h=0;
		int l=0;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n-1;i++)
		{
		if(a[i+1]>a[i])
		{
			h++;
		}
		else if(a[i+1]<a[i])
		{
				l++;	
		}
		}
		printf("Case %d: %d %d\n",j,h,l);
	}
	return 0;
}
