#include <stdio.h>
#include <string.h>

int main ()
{
    char firstName [12] = "Farhan";
    char lastName [12] = " Nahid";

    strcat(firstName, lastName);

    printf("My Name is %s\n", firstName);


    return 0;
}