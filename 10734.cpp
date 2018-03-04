#include <stdio.h>
#include <string.h>
int main()
{
    char s1[500],s2[500],s1s[500],s2s[500];
    int t,i,j,k;
    
    scanf("%d ",&t);
    for(i=0;i<t;i++){
      gets(s1);
      gets(s2);
      if(strcmp(s1,s2)==0)printf("Case %d: Yes\n",i+1);
      else {
          k=0;
        for(j=0;j<strlen(s1);j++){
          if(s1[j]!=' '){
            s1s[k]=s1[j];
             k++;
          }
        }
      s1s[k]='\0';
      k=0;
      for(j=0;j<strlen(s2);j++){
        if(s2s[j]!=' '){
         s2s[k]=s2[j];
         k++;
        }
 
      }
      s2s[k]='\0';
      if(strcmp(s1s,s2s)==0)printf("Case %d: Output Format Error\n",i+1);
      else printf("Case %d: Wrong Answer\n",i+1);
 
      }
 
 
    }
 
 
    return 0;
}
