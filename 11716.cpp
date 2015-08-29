#include <bits/stdc++.h>
 using namespace std;
 int main()
 {
 	char s[10009];
 	float sq;
 	int k,len,num,i,j,temp;
 	cin>>num;
 	while(num--)
 	{
 		scanf("\r");
 		gets(s);
 		len=strlen(s);
 		sq=sqrt(len);
 		int p=(int)sq;
 		char ch[p][p];
 		if(p == sq)
 		{
			int n=0;
			for(i=0;i<p;i++)
			{
			for(j=0;j<p;j++)
			{
				ch[i][j]=s[n++];
				//printf("%c",ch[j][i]);
			}
			}
			for(i=0;i<p;i++)
			{
			for(j=0;j<p;j++)
			{	
			printf("%c",ch[j][i]);
			}
			}
			cout<<"\n";
		}
		else
 		{
 			cout<<"INVALID"<<endl;
 		}
		
 		//l=strlen(s);
 		
 	}
 	return 0;
 }
