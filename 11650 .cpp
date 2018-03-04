#include <bits/stdc++.h>
using namespace std;
int main()
 {
    int tc, hour, mint;
   cin>>tc;
    while(tc--)
    {
    scanf("%d:%d", &hour, &mint);
        hour= 11-hour + (mint == 0);  
        if(hour <= 0) 
	    hour=hour+12;
        if(mint != 0)
        mint = 60-mint;
        printf("%02d:%02d\n",hour,mint);
    }
    return 0;
}
