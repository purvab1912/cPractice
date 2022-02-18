#include <stdio.h>

void main (void)
{
    int age;
    printf ("enter your age\n");
    scanf ("%d", &age);

    if (age>=18){
        printf ("you can vote!");

    }
    else {
        printf ("you cannot vote!");
    }

}