#include <stdio.h>

void main (void)
{

    int marks100;
    printf ("enter your marks\n");

    scanf ("%d", &marks100);

    if (marks100>=25){

        printf ("you are pass");
    }
    else{
        printf ("you are fail");
    }
}