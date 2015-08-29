#include <bits/stdc++.h>
#include <vector>

using namespace std;
char letters[100001];

int main()
{
	int i;
	
	while ( scanf ("%s", &letters) != EOF ) {
 
        int l = strlen (letters);
 
	    list <char>beiju;
	
	list <char>::iterator it = beiju.begin();
    
	for (  i = 0; i < l; i++ ) {
 
            if ( letters [i] == '[' ) it = beiju.begin();
            else if ( letters [i] == ']' ) it = beiju.end();
            else beiju.insert(it, letters [i]);
        }
 
        for ( it =beiju.begin(); it != beiju.end(); it++ )
	
	printf("%c",*it);

     printf ("\n");
    
}
    return 0;
}
