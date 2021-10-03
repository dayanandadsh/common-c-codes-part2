/*
Subject : C Programming 
*/



/*
Program to Convert Octal to Decimal
*/

#include <stdio.h>
#include <math.h>


int main()
{

    int octalNumber, decimalNumber = 0;
    int i = 0;
 
    printf("Enter the Octal Number: ");
    scanf("%d", &octalNumber);
    while (octalNumber != 0)
    {
        decimalNumber =  decimalNumber +(octalNumber % 10) * pow(8, i++);
        octalNumber = octalNumber / 10;
    }
    printf("The Decimal Number after conversion is %d\n",decimalNumber);
    
    return 0;
}