#include <bits/stdc++.h>
using namespace std;
long int a[10000];
int main()
{
	long int n,i;
	while(cin>>n)
	{
		if(n==0) break;
		a[1]=1;
		a[2]=2;
		for(i=3;i<=n;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		cout<<a[n]<<'\n';
	}
	return 0;
}
