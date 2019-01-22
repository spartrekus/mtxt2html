
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PATH_MAX 2500


int main()
{
        int c , co, pcc;
        char lline[PATH_MAX];  

        lline[0]='\0';
        pcc = 0; co = 0;

        c = getchar();
        while( c != EOF )
        {
           if ( c != '\n' )
              lline[pcc++]=c;

           if ( c == '\n' ) 
           {
             lline[pcc++]='\0';
             printf( "%s", lline );
             lline[0]='\0';
             pcc = 0;

             if ( ( co == '\n' ) && ( c ==  '\n' ) )
                printf( "<br><br>\n" );
             else
                printf( "\n" );
           }

           co = c; 
           c = getchar();
        }
	return 0;
}


