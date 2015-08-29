#include <stdio.h>

int main()

{
	int a,b,c,s,i,count,sum,j;
	while ( scanf("%d %d",&a,&b) == 2)
	{
		printf("%d %d",a,b);
		sum=0;
		
		if(a>b)
        {
            s=b;
            b=a;
            a=s;
        }
        
		for( i = a ; i <= b ; i++ )
	 	{
        	count=0;
            j=i;
            while(j!=1)
            {
                if(j % 2==0)
                    {
                    	j = j/2;
                    }
                else
                    {
                    	j = (3*j)+1;
                    }
                count++;
            }
            if(count>=sum)
                {
                	sum=count;
                }
        }
        printf(" %d\n",sum+1);
    }
    return 0;
}
