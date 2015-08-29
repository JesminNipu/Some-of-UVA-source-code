#include <stdio.h>

int  a[1000];

int main()
{
    int n,a[1001],count=0,i,j;
  
    while(scanf("%d",&n)==1)
         count=0,j=0;
        for( i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0) 
			count++;
        }

        if(count==n)
        {
            printf("0\n");
        }
        else{

            for(i=0; i<n; i++)
                if(a[i]!=0)
                if(j)
          printf(" ");
          j=1;
          printf("%d",a[i]);
          printf("\n");  
        }
        
    
    return 0;
}
