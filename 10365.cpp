#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,h,w,area,surface_area,tc;
    cin>>tc;
    while( tc-- )
    {
        cin>>n;
        area=1000000;
        for(l=1;l<=n;l++)
            for(h=1;h<=sqrt(n);h++)
                for(w=1;w<=sqrt(n);w++)
                {
                    if(l*h*w==n)//if it a cube
                    {
                    	
                        surface_area = (2*l*w)+(2*l*h)+(2*h*w);
                        
						if(area>surface_area) 
						area=surface_area;
                    }
                }
        printf("%d\n",area);
    }
    return 0;
}

