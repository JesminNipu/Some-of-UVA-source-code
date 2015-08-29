#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

char s[1000003];

int main()
{
long int len,i,j,t,min,max,tc=0,temp,op=1;

while(cin>>s)
    {
    len=strlen(s);
    if(len==0)    break;
    cin>>t;
        {
        for(i=0;i<t;i++)
            {
            cin>>min>>max;
            
            if(i==0)
            
            printf("Case %ld:\n",tc+1);
            
            if(min>max)
                {
                temp=min;
                min=max;
                max=temp;
                }
            for(j=min;j<max;j++)
                {
                if(s[j]!=s[j+1])
                    {
                    printf("No\n");
                    break;
                    }
                   
                  }
                   if(j==max)
                    {
                    		printf("Yes\n");
                    } 
            }
        }
		tc++;     
    }
    return 0;
}
