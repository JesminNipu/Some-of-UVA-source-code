#include <stdio.h>
  
  int main()
  
  {
  	int t,s,d,S,D,S1,D1;
  	
  	scanf("%d",&t);
  	
  	while(t--)
  	
  	{
  		scanf("%d %d",&s,&d);
  		S1=(s+d)/2;
  		D1=(s-d)/2;
  
  if( D1 < 0 )
  	{
  		printf("impossible\n");
  	}
  	
  	else if( (s+d)% 2==1 || (s-d)% 2==1)
  	
  	{
  		printf("impossible\n");
  	}
  	else
  	{
  			printf("%d %d\n",S1,D1);
  	}
  }
  	return 0;
  }
