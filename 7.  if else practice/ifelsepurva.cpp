#include <stdio.h>

void main (void)
{
    int marks;
    printf ("enter your marks\n");

    scanf ("%d", &marks);

    if(marks>=25){
        printf ("Congratulations! You are pass");
    }
    else{
        printf ("You are fail!\n better luck next time");
    }
}