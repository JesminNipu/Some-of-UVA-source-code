#include <bits/stdc++.h>
using namespace std; 
int main()  
{  
	char m[1002];
    int tc, l, n, i, j, r,sum,a[100];  
    bool flag;  
    cin>>tc;  
    while (tc--)  
    {  
        scanf("\r"); 
        gets(m);  
        l = strlen(m);  
        cin>>n;  
        for (i = 0; i < n; i++)  
          cin>>a[i];  
        flag = false;  
        for (i = 0; i < n; i++)  
        {  
            r= 0;///remainder  
            for (j = 0; j < l; j++)  
                 r = (r*10 + (m[j]-'0'))% a[i] ;
				 if (r)  
            	{  
                flag = true;  
                break;  
            	}  
        }  
        if (flag) printf("%s - Simple.\n", m);  
        else printf("%s - Wonderful.\n", m);  
    }  
    return 0;  
}  
