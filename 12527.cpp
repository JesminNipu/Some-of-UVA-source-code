
#include<stdio.h>

int main()
{
int n,m,ro,a[20],num,i,j,digit,k,count;
while(scanf("%d %d",&n,&m)==2)
{
    ro=0;
    for(i=n;i<=m;i++)
    {
        num=i;
        digit=0;
        while(num>0)
        {
           a[digit++]=num%10;
            num/=10;
        }
        count=0;
        for(j=0;j<digit-1;j++)
        {
            for(k=j+1;k<digit;k++)
            {
                if(a[j]==a[k])
                {
                    count=1;
                    break;
                }
            }
            
        }
        if(count==0)
        {
            ro++;
        }
   
    }
   printf("%d\n",ro);
}
return 0;

}

