#include <stdio.h>
#include <math.h>
int a[2000];
int main()
{
	int t,n,i,j,sum,count,avg,ans;
	scanf("%d",&t);
	while(t--)
	{   
		sum=0,count=0;
		
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
		sum+=a[i];
		
		}
		avg=sum/n;
		
		for(i=0;i<n;i++)
		{
		
		if(a[i]>avg)
		{
			count++;
		}
		
		}
		printf("%.3f%%\n",((float)count/(float)n)*100);
	}
	return 0;
}
