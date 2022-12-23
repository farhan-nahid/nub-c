#include <stdio.h>

int main ()
{
    int arr[10], i=0, j=0;

    for(; i<10; i++){
       scanf("%d", &arr[i]);
    }

    printf("Output================================================================\n");

    for(; j<10; j++){
        printf("%d\n", arr[j]);
    }

    // printf("%d\n", arr);

    // while(1) {
    //     printf("%d", *arr);
    // }

    //  printf("%d\n", *arr);
    //  printf("%d\n", arr+sizeof(int));

    return 0;
}