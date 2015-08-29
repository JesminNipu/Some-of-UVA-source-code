#include <bits/stdc++.h>
using namespace std;

int a[10000];

int main()
{
	 int n,t,i,j;
	while(cin>>t)
	{
		j=0;
		if(t==0)
		return 0;
		for(i=0;i<t;i++)
		{
			scanf("%d",&a[i]);
		
			if(a[i] > 0)
			{
				j++;
				a[n++]=a[i];
			}
		}
	for(i=0;i<n;i++)
	{
		if(j == 1)
          printf(" ");
          j=1;
          printf("%d",a[i]);
	}
		 if (j == 0)
            printf("0");
        printf("\n");
	}

    return 0;
}
