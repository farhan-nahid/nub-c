#include <stdio.h>
#include <string.h>

int main ()
{
    char myStr [10] = "Farhan";
    int strLength = 0;

    strLength = strlen(myStr);

    printf("My string Length is %d\n", strLength);

    return 0;
}