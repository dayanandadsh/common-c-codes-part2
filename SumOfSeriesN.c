/*
Subject : C Programming 
*/
/* 
Program to find out the sum of series 1 + 2 + …. + n.
*/
#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    printf("Enter the n value : ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("Sum of the series :  ");
    for (i = 1; i <= n; i++)
    {
        if (i != n)
            printf("%d + ", i);
        else
            printf("%d = %d ", i, sum);
    }
    printf("\n");

    return 0;
}