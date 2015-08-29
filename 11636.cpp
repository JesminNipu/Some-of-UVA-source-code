 #include<bits/stdc++.h>
using namespace std;
int main ()
{
        int p ,i, n ,l;
        int c = 0;
        while(cin>>n)
        {
       	
        if(n<0)	
       {
       	 break;
       }
       else
       {
       for(i=0;i<n;i++)
       	{
       		l=pow(2,i);
		if(l>=n)
			
    	break;
		}
		
		}
		printf("Case %d: %d\n",c+1,i);
		c++;
	
	}
		
return 0;
}
