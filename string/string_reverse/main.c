#include <stdio.h>
#include <string.h>

int main ()
{
    char inputString[100];
    char outputString[100];
    int length;
    int i;
    int j = 0;

    printf( "Please Enter a string to be reversed \n" );
    scanf( "%s", inputString );

    length = strlen( inputString );

    for( i = length - 1; i >= 0; i--) {
        outputString[ j ] = inputString[ i ];
        j++;
    }

    printf( "The reversed string is: %s\n", outputString);
  
    return 0;
}