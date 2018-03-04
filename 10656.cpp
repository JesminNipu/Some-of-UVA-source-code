#include <stdio.h>
int a[2000];
int main()
{
	int i,t,n,s,count,j;
	while(scanf("%d",&n)==1 )
	{
		s=0,j=0,count=0;
		if(n==0) break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]!=0)
			{
				count++;
				a[j++]=a[i];
			}
		}
		for(i=0;i<j;i++)
		{
	if(s)
          printf(" ");
          s=1;
          printf("%d",a[i]); 
			}
		if(count==0)
		
			printf("0");
		printf("\n");
	
	}
	return 0;
}
