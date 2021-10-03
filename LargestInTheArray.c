/*
Subject : C Programming 
*/

/*
Program to Find the Largest Number in an arrayay
*/

#include <stdio.h>

int main()
{
    int n, i;
    int array[100];
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    /* storing the largest number to array[0] */
    for (i = 1; i < n; ++i)
    {
        if (array[0] < array[i])
        {
            array[0] = array[i];
        }
    }

    printf("Largest number in the array = %d\n", array[0]);
    return 0;
}