#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[10]= "Temp";
    char str2[10]= "temp";
    int result ;

    result = strcmp(str1, str2);


    if(result == 0){
        printf("Two variables are same\n");
    }
    else{
        printf("Two variables are not same\n");
    }

    return 0;
}