#include <stdio.h>

int main ()
{
    char myStr[20];

    printf("Enter Something\t");
    gets(myStr);
    printf("You Enter %s string\n", myStr);

    puts(myStr);        // puts is using for print the string. it's alternative of printf
    

    return 0;
}