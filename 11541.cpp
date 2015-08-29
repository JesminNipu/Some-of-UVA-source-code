#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cases=0,j,r;
    char s[1000],c;
    cin>>tc;
    while(tc--)
    {
      scanf("\r");
      gets(s);
      int l=strlen(s);
      printf("Case %d: ",++cases);
      for(int i=0;i<l;i++)
      {
          r=0;
                if(s[i]>='A'&&s[i]<='Z')
                 c=s[i];
                else 
                {
                    while(s[i]>='0'&& s[i]<='9')
                    {
                        r=r*10+s[i]-'0';
                        
                        i++;
                        
                    }
                    i--;
                    for( j=0;j<r;j++)
                    printf("%c",c);
                }
 
        }
        printf("\n");
      }
 
    return 0;
}
