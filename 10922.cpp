#include <bits/stdc++.h>
using namespace std;
char in[1002];
int main()
{
	int j,i,count,sum,totat,digit,deg,l,q,d;
	
	bool flag;
	
	while(1)
	{
		flag=true;
	
		sum=0;
	
	l=strlen(gets(in));
	
	if(l==1 && in[0]=='0')return 0;
	
	for(i=0;i<l;i++)
	
	sum+=in[i]-'0';
	
	if(sum%9==0) flag=true;
	
	else 
	
	flag=false;
	  
        count=1;q=0;d=sum;

        if(flag==true)
        while(d!=9 and d>9)
        {
            while(d!=0)
            {
             q+=d%10;
             d=d/10;
            }
            d=q;

        count++;
        }

        if(flag==true)
        printf("%s is a multiple of 9 and has 9-degree %d.\n",in,count);
        else if(flag==false)
        printf("%s is not a multiple of 9.\n",in);

    }

    return 0;
}
