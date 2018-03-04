#include <stdio.h>
int main()
{
	
	long int dn,r,q;
	long int bn[10000],i,j;
	while(1)
	{
		scanf("%ld",&dn);
		if(dn<0) break;
		else if(dn==0) printf("0\n");
		else
		{
			q=dn;
	 		i=0;
            while(q>0)
            {
                bn[i++]=q%3;
                q=q/3;
            }
            i=i-1;
            for(j=i;j>=0;j--)
                printf("%ld",bn[j]);
	printf("\n");
	
		}
	}
	
	return 0;
	
}
