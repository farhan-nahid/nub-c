#include <stdio.h>
#include <string.h>


typedef struct Myself {
        char *name;
        int age;   
}farhan;


int main ()
{
    farhan name;
    name.age = 20;
    name.name = "Farhan";

    

    // struct Myself farhan;
    // struct Myself farhan = {"Farhan", 21};
    
    // strcpy(farhan.name, "Farhan");
  
    return 0;
}