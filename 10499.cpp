#include <bits/stdc++.h>
using namespace std;

int main()
{
	 long int r ,a;
	while(scanf("%ld",&r)==1)
	{
		if(r<0) break;
		if(r==0)  printf("0%\n");
		else if(r==1) printf("0%\n");
		else if(r>=2)
		{
				a=r*25;
				printf("%ld%%\n",a);
		}
	
	}
	return 0;
}
