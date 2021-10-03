/*
Subject : C Programming 
*/

/*
Program to Convert the given Binary Number into Decimal 
*/

#include <stdio.h>

int main()
{

    int num, binaryValue, decimalValue = 0, base = 1, rem;

    printf("Enter the binary number : ");
    scanf("%d", &num);

    binaryValue = num;
    while (num > 0)
    {
        rem = num % 10;
        decimalValue = decimalValue + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("The Decimal number after conversion = %d \n", decimalValue);

    return 0;
}