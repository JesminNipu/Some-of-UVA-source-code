#include <stdio.h>

int main()

{
	int t,a,b,i,j=1,sum;
	 
	scanf("%d",&t);
	
	while( t-- )
	
	{
		sum = 0;
		scanf("%d %d",&a,&b);
		
		for( i=a ; i<=b ; i++)
		
		{
			if(i%2==1)
			
			sum += i;
			
		}
	
	printf("Case %d: %d\n",j,sum);

	j++;
}
return 0;
}
