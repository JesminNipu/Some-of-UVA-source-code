#include <bits/stdc++.h>
using namespace std;
char s[200000];
int main()
{
	
	int c=0,i;
	while(gets(s))
	{
		for(i=0;i<strlen(s);i++)
	{
		
		if(s[i]=='"')
		{
			c++;
		 if(c/2==0)
                printf("``");
                else
                printf("''");
				}
				else
				printf("%c",s[i]);;
		}
		printf("\n");
	}
	return 0;
}
