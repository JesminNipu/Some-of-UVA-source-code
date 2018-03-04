#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char s[100],len;
	int i,j,op,d,sum,ip=0,ip1,ip2;
	float result;
	while(gets(s))
	{
		 ip++;
		 sum=0;
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			if(s[i]=='a' || s[i]=='A')
			sum+=1;
			if(s[i]=='b' || s[i]=='B')
			sum+=2;
			if(s[i]=='c' || s[i]=='C')
			sum+=3;
			if(s[i]=='d' || s[i]=='D')
			sum+=4;
			if(s[i]=='e' || s[i]=='E')
			sum+=5;
			if(s[i]=='f' || s[i]=='F')
			sum+=6;
			if(s[i]=='g' || s[i]=='G')
			sum+=7;
			if(s[i]=='h' || s[i]=='H')
			sum+=8;
			if(s[i]=='i' || s[i]=='I')
			sum+=9;
			if(s[i]=='j' || s[i]=='J')
			sum+=10;
			if(s[i]=='k' || s[i]=='K')
			sum+=11;
			if(s[i]=='l' || s[i]=='L')
			sum+=12;
			if(s[i]=='m' || s[i]=='M')
			sum+=13;
			if(s[i]=='n' || s[i]=='N')
			sum+=14;
			if(s[i]=='o' || s[i]=='O')
			sum+=15;
			if(s[i]=='p' || s[i]=='P')
			sum+=16;
			if(s[i]=='q' || s[i]=='Q')
			sum+=17;
			if(s[i]=='r' || s[i]=='R')
			sum+=18;
			if(s[i]=='s' || s[i]=='S')
			sum+=19;
			if(s[i]=='t' || s[i]=='T')
			sum+=20;
			if(s[i]=='u' || s[i]=='U')
			sum+=21;
			if(s[i]=='v' || s[i]=='V')
			sum+=22;
			if(s[i]=='w' || s[i]=='W')
			sum+=23;
			if(s[i]=='x' || s[i]=='X')
			sum+=24;
			if(s[i]=='y' || s[i]=='Y')
			sum+=25;
			if(s[i]=='z' || s[i]=='Z')
			sum+=26;
		}
		
		d=0;
		j=1;
		while(j!=0)
		{
			d=d+sum%10;
			sum/=10;
			j++;
			if(sum==0) break;
		}
		
		if(d>=10)
		{
			d = d%10 + (d/10)%10;
		}
		//cout<<"d"<<d<<"\n";
		if(ip%2==1)
		 ip1= d;
		else
		{
			 ip2=d;
		if(ip1>ip2)
		{
			result=(float)ip2*100/(float)ip1;
		}
		else
		{
			result=(float)ip1*100/(float)ip2;
		}
		printf("%.2f %%\n",result);
		}
	}
	return 0;
}
