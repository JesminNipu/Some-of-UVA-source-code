#include <bits/stdc++.h>
using namespace std;
int main()
{
long long s,d,size,sum;
while(cin>>s>>d)
{
	sum=0;
	for(size=s;size<=d;size++)
	{
	sum=sum+size;
	if(sum>=d)
	{
	printf("%lld\n",size);
	break;
	}
	}
}
return 0;
}
