#include <string.h>
#include <stdio.h>


char s1[1000],s2[1000],n1[1000],n2[1000];
int main()
{
	char l,m,g,h;
	int t,i,j,k,r;
	scanf("%d%*c",&t);
	
	while(t--)
	{
		gets(s1);
		gets(s2);
		l=strlen(s1);
		m=strlen(s2);
		if(l==m)
		{
			g=0,h=0;
			for(k=0;k<l;k++)
		    {
			if(s1[k]=='a'||s1[k]=='e'||s1[k]=='i'||s1[k]=='o'||s1[k]=='u')
			
				continue;
				else
				n1[g]=s1[k];
				g++;
			}
			n1[g]='\0';
		
		for(r=0;r<m;r++)
		{
				 if(s2[r]=='a'||s2[r]=='e'||s2[r]=='i'||s2[r]=='o'||s2[r]=='u')
			
				continue;
				else
				n2[h]=s2[r];
				h++;	
			}
			n2[h]='\0';
		
		
		if(strcmp(n1,n2)==0) 
	 printf("Yes\n");
	 else printf("No\n"); 
	 } 
	 else 
	 printf("No\n");
	  } 
	return 0;

}
