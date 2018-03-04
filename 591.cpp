#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,i,a[100],l=1,sum,move,av;
while(scanf("%d",&n)==1 )
{
		if(n==0) break;
		sum=0,move=0;;
		for(i=0;i<n;i++)
	    {
	    	scanf("%d",&a[i]);
			sum=sum+a[i];
	    }
		av=sum/n;
		for(i=0;i<n;i++)
    	if(a[i]>av)
        move=move+(a[i]-av);
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",l,move);
		l++;   
}
return 0;
}

