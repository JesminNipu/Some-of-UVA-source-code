#include <bits/stdc++.h>
using namespace std;

int main()
{
 long int a,b,x,y;
    while(cin >> a >> b)
    {
        if (a == 0 && b == 0) break;
        long int count=0,c=0;
        while( a > 0 || b > 0)
        {
            count =  (a%10 + b%10 + count)/10;
            a/= 10;
            b /= 10;
            if (count) c++;
        }
 
         if (c == 0) printf ("No carry operation.\n");
        else if(c==1)
printf("%ld carry operation.\n",c);
else
printf("%ld carry operations.\n",c);
    }
    return 0;
}
