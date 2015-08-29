#include <bits/stdc++.h>
using namespace std;
int main()
{
	double N,n;
	int c=1;
	//long int  n;
	while(cin>>N and N!=0)
	{
		n=ceil((sqrt(8*N + 9)+ 3)/2);
		printf("Case %d: %.lf\n",c++,n);
	}
	return 0;
}
