#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[150];
	int i,j,total,result,l;
	while(gets(s))
	{
		total=0;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			switch(s[i])
			{
			case 'a':
            total=total+1;    break;
            case 'b':
            total=total+2;    break;
            case 'c':
            total=total+3;    break;                 
            case 'd':
            total=total+4;    break;
            case 'e':
            total=total+5;    break;
            case 'f':
            total=total+6;    break;
            case 'g':
            total=total+7;    break;
            case 'h':
            total=total+8;    break;
            case 'i':
            total=total+9;    break;
            case 'j':
            total=total+10;     break;
            case 'k':
            total=total+11;     break;
            case 'l':
            total=total+12;     break;
            case 'm':
            total=total+13;     break;
            case 'n':
            total=total+14;     break;
            case 'o':
            total=total+15;     break;
            case 'p':
            total=total+16;     break;
            case 'q':
            total=total+17;     break;
            case 'r':
            total=total+18;     break;
            case 's':
            total=total+19;     break;
            case 't':
            total=total+20;     break;
            case 'u':
            total=total+21;     break;
            case 'v':
            total=total+22;     break;
            case 'w':
        	total=total+23;     break;
            case 'x':
            total=total+24;     break;
            case 'y':
            total=total+25;     break;
            case 'z':
            total=total+26;     break;
            case 'A':
            total=total+27;     break;
            case 'B':
            total=total+28;     break;
            case 'C':
            total=total+29;     break;
            case 'D':
            total=total+30;     break;
            case 'E':
            total=total+31;     break;
            case 'F':
            total=total+32;     break;
            case 'G':
            total=total+33;     break;
            case 'H':
            total=total+34;     break;
            case 'I':
            total=total+35;     break;
            case 'J':
            total=total+36;     break;
            case 'K':
            total=total+37;     break;
            case 'L':
            total=total+38;     break;
            case 'M':
            total=total+39;     break;
            case 'N':
            total=total+40;     break;
            case 'O':
            total=total+41;     break;
            case 'P':
            total=total+42;     break;
            case 'Q':
            total=total+43;     break;
            case 'R':
            total=total+44;     break;
            case 'S':
            total=total+45;     break;
            case 'T':
            total=total+46;     break;
            case 'U':
            total=total+47;     break;
            case 'V':
            total=total+48;     break;
            case 'W':
            total=total+49;     break;
            case 'X':
            total=total+50;     break;
            case 'Y':
            total=total+51;     break;
            case 'Z':
            total=total+52;     break;
            	
			}
		}
		result=1;
			for(i = 2; i <=total/2; i++)
			  
	         	if(total % i == 0)
				{
				result=0; break;	
				}
	     if(result==1)   
    printf("It is a prime word.\n");
    else
    printf("It is not a prime word.\n");
}
	return 0;
}
