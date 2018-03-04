
#include<stdio.h>
int main()
{
int smoke,n,k;
while(scanf("%d %d",&n,&k)==2 && k>1)
{

do
{
	smoke=n;
smoke=smoke+(n/k);

n=(n/k)+(n%k);
printf("%d\n",smoke);
}
while(n>=k);

}
return 0;
}



