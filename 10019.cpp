#include <bits/stdc++.h>

using namespace std;
int get_count (int n);
int main()
{
	int tc,i,j=0,n;
	cin>>tc;
	while(tc--)
	{
		scanf("%d",&n);
		
		printf("%d ",get_count(n));
		char s[50];
		sprintf(s, "%d" ,n);
		sscanf(s, "%x" ,&n);
		printf("%d\n",get_count(n));
		
	}
	return 0;
}
int get_count (int n)
{
	int c=0;
	while(n != 0)
	{
		if ( n & 1)
		c++;
		n=n >> 1;
	}
	return c;
}
