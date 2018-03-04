#include <bits/stdc++.h>
using namespace std;
int main()
{
char input[1002];
	int i,j,l,sum;
	while(1)
	{
		gets(input);
		sum=0;
		l=strlen(input);
	if(input[0]=='0' and l==1)  break;
	for(i=0;i<l;i+=2)
	{
		sum+=input[i]-'0';
	}
	for(i=1;i<l;i+=2)
	{
		sum-=input[i]-'0';
	}
	if((sum) % 11) printf("%s is not a multiple of 11.\n",input);
	else
	printf("%s is a multiple of 11.\n",input);
	}
	return 0;
}
