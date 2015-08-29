#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,i,n,j,s;
	while(scanf("%d",&a)==1 && a>0)
	{
		s=0;
		for(i=1;i<=a;i++)
		s+=(i*i);
	  cout<<s<<endl;
	
	}
	return 0;
}
