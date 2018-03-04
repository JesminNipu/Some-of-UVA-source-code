#include <stdio.h>
 
int main ()
{
    int problem1,prblm [20],required [20],tc = 0;
 
    while ( scanf ("%d", &problem1)== 1 ) {
 
        if ( problem1 < 0 )
            return 0;
 
        prblm [0] = problem1;
 
        int i;
        for ( i = 1; i < 13; i++ )
            scanf ("%d", &prblm [i]);
 
        for ( i = 0; i < 12; i++ )
            scanf ("%d", &required [i]);
 
        printf ("Case %d:\n", ++tc);
 
        for ( i = 0; i < 12; i++ ) {
 
            if ( problem1 >= required [i] ) {
                problem1 -= required [i];
                printf ("No problem! :D\n");
            }
 
            else
                printf ("No problem. :(\n");
 
            problem1 += prblm [i + 1];
        }
    }
 
    return 0;
}
