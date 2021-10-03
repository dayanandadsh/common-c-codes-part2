/*
Subject : C Programming 
*/

/*
Program in c to print 1 to 100 without using loop
*/

#include <stdio.h>

int main()
{

    int number;

begin:
    number = number + 1;
    printf("%d ", number);

    if (number < 100)
    {
        goto begin;
    }
    printf("\n");
    return 0;
}