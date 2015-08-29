/*

  So, to find out thousands divide the summation by 1000.0
(  as summation is is a floating point number ) . 
If summation is 1111 to find the place of comma 
divide summation by 1000
and then print result, a comma ',' and 
then print the remainder . 
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    double d, sum;
    int j=0;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        for(int i=0; i<12; i++)
        {
            scanf("%lf",&d);
            sum = sum + d;
        }
        double avg = sum/12.00;
        printf("%d $",++j);

        if(avg<=999999.0 && avg>999.0)
        {
		 int a = avg/1000.0;
		 printf("%d,",a); 
		 avg = fmod(avg,1000.0);
		}

        printf("%.2lf\n",avg);
    }
    return 0;
}
/*
#include <stdio.h>      // printf 
#include <math.h>       // fmod 

int main ()
{
  printf ( "fmod of 5.3 / 2 is %f\n", fmod (5.3,2) );
  printf ( "fmod of 18.5 / 4.2 is %f\n", fmod (18.5,4.2) );
  return 0;
}

	
Edit & Run


Output:


fmod of 5.3 / 2 is 1.300000
fmod of 18.5 / 4.2 is 1.700000
*/


