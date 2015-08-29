 #include<stdio.h>
int main(){
    int k,r;
    long int i,j,f,sum=0;

    //Taking maximum numbers form user
    
    while(scanf("%d",&r)==1 && r>0)
    
	{
		i=0;
		j=1;
	f=0;
    for(k=2;k<r;k++)
	
         f=i+j;
         i=j;
         j=f;
         for(i=1;i<=r;i++)
   		 sum=sum+f;
         printf(" %ld %ld",sum-f,sum);
    
}
  
    return 0;
}
