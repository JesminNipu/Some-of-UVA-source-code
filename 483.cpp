#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[100],ch;
int a,i,j,k,l;
while(cin>>s)
{
	ch=getchar();
	
	for(i=strlen(s)-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	putchar(ch);
	
}
return 0;
}
