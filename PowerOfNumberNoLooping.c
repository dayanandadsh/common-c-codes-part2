/*
Subject : C Programming 
*/
/*
Program to find Power of a Number Using while Loop
*/

#include <stdio.h>

int main()
{

    int number, power, i = 0;
    int numberToPower = 1;

    printf("Enter the number : ");
    scanf("%d", &number);
    printf("Enter the power : ");
    scanf("%d", &power);

    while (i < power)
    {

        numberToPower = numberToPower * number;
        i++;
    }

    printf("%d raised to power %d = %d\n", number, power, numberToPower);

    return 0;
}