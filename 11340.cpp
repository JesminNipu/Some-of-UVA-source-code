#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
char ch1[10002];
int main()
{
	
	int n,k,m,value[102],nn;
	char ch[302];
	double s;
	
	scanf("%d",&n);
	
	
	while(n--)
	{
		s=0;
		scanf("%d\n",&k);
		
		for(int i=0;i<k;i++)
		scanf("%c%d\n",&ch[i],&value[i]);
		
		scanf("%d\n",&nn);
		
		for(int i=0;i<nn;i++)
	{
	gets(ch1);
	int l=strlen(ch1);
	for(int j=0;j<k;j++)
	{
		for(int p=0;p<l;p++)
	
		if(ch[j]==ch1[p])
		s+=value[j];
	
	
	}
     
	}


    printf("%0.2lf$\n",s/100.00);


	}
	return 0;
}
