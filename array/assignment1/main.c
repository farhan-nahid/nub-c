/*
====================================================================================================

Write a C program that will find the largest number among 10 user given numbers of any data types.

====================================================================================================
*/

#include <stdio.h>

int main()
{
    int arr[10], i=0, j=0, result=0, temp=0;
   
    for(; i<10; i++)
    {
        printf("Enter a Number \t");
        scanf("%d", &arr[i]);
    }

    for(; j<10; j++)
    {
        temp = arr[j];
        if(temp > result){
            result = temp;
        }
    }

    printf("the largest number is %d\n", result);

    return 0;
}