#include <stdio.h>
#include <string.h>

int main ()
{
    char myName [6] = "Farhan";
    char copyText [6];

    printf("My Name is %s\n", myName);

    strcpy(copyText, myName);
    printf("My Name is move to %s\n", copyText);

    return 0;
}