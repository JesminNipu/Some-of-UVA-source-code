#include <bits/stdc++.h>
using namespace std;
long int a[5],b[5];
int main()
{
	bool flag;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>b[0]>>b[1]>>b[2]>>b[3]>>b[4])
	{
		flag=false;
		for(int i=0;i<5;i++)
		{
			if(a[i]==b[i])
			flag=true;
		}
	printf("%s\n",flag ? "N":"Y");
	}
	return 0;
}
