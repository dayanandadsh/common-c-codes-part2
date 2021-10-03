/*
Subject : C Programming 
*/

/*
Program to Reverse an Integer
*/

#include <stdio.h>

int main()
{
    int n, reverseNumber = 0, remainderValue;
    printf("Enter the integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainderValue = n % 10;
        reverseNumber = reverseNumber * 10 + remainderValue;
        n /= 10;
    }
    printf("Reversed Integer Number = %d\n", reverseNumber);

    return 0;
}