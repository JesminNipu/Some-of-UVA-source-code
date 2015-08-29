#include<bits/stdc++.h>
using namespace std;
int main()
{

 
    int tc,a[13];
 
    scanf ("%d", &tc);
 
    printf ("Lumberjacks:\n");
 
    while ( tc-- )
	 {
        for ( int i = 0; i < 10; i++ ) {
            scanf ("%d", &a [i]);
        }
 
        bool flag = true;
 
        if (a [0] > a [1])
		 flag = false;
 
        bool res = true;
 
        if (flag) {
 
            for ( int i = 1; i < 10; i++ ) {
                if (a [i] < a [i - 1]) 
				res = false;
            }
 
        }
		 else 
		{
 
            for ( int i = 1; i < 10; i++ )
			 {
                if (a [i] > a [i - 1]) 
				res = false;
            }
        }
 
        if (res)
            printf ("Ordered\n");
        else
            printf ("Unordered\n");
 
    }
 
    return 0;
}
