#include<bits/stdc++.h>
using namespace std;

bool vowel(char ch)
{
	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    return true;
  else
    return false;
}
int main()
{
	
	char ch,c;
	
while((ch=getchar()) != EOF)	//while(ch=getchar())
	{
		//if(ch==EOF)
		//return 0;
		
		if(isalpha(ch))
		{
			if(vowel(ch))
			{
				while(isalpha(ch))
				{
					printf("value=1 %c",ch);
					ch=getchar();
					printf("value=2 %c\n",ch);
				}
				printf("ay\n");
			}
			/*else
			{
				c=ch;
				ch=getchar();
				while(isalpha(ch))
				{
					printf("%c",ch);
				    ch=getchar();	
				}
				printf("%cay",c);
				
			}*/
		}
		//printf("%c",ch);
	
	}
	return 0;
}
