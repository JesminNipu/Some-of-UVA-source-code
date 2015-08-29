#include <bits/stdc++.h>
#define pi 2*acos(0)

using namespace std;
int main()
{
	double s,a,b,c,tri_area,red_out,red_in;
	double area_circum,area_inscribed,area_triangle;
 while(scanf("%lf %lf %lf", &a, &b, &c)==3)
    {
        s=(a+b+c)/2;
        tri_area=sqrt(s*(s-a)*(s-b)*(s-c));

        red_out=((a*b*c)/(4*tri_area));
        red_in=(tri_area/s);

        area_circum=(pi*pow(red_out, 2))-tri_area;
        area_inscribed=(pi*pow(red_in, 2));
        tri_area=tri_area-area_inscribed;

        printf("%.4lf %.4lf %.4lf\n", area_circum, tri_area, area_inscribed);
    }
}
