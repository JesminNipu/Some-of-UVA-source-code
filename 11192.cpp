#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[200];
	int n,i,j,l,a;
	while(cin>>n)
	{
		if(n==0) break;
		scanf("%s",s);
		l=strlen(s);
		a=l/n;
	 for(i = 0; i < l; i += a) {
            for(j = i+a-1; j >= i; j--)
			printf("%c",s[j]);
		}
	puts("");
	}
	return 0;
	
}
