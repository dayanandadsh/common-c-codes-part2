/*
Subject : C Programming 
*/

/*
Program To Convert Time into Minutes without Functions
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char timeValue[10];
    int i, j, choice;
    int hourValue, minuteValue, secondsValue;
    float finalMinutes = 0;

    printf("Choose time format you want : \n");

    printf("1. Enter the time in HH:MM:SS format\n2. Enter Hours and Minutes\nChoose your option : ");

    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the time in HH:MM:SS [Hours:Minutes:Seconds] format (ex: 09:10:15) : ");
        scanf("%s", timeValue);
        hourValue = timeValue[0] - '0';
        hourValue = (hourValue * 10) + (timeValue[1] - '0');
        minuteValue = timeValue[3] - '0';
        minuteValue = (minuteValue * 10) + (timeValue[4] - '0');
        secondsValue = timeValue[6] - '0';
        secondsValue = (secondsValue * 10) + (timeValue[7] - '0');
        finalMinutes = (hourValue * 60) + minuteValue + ((float)secondsValue / 60);
        printf("The given time %s into Minutes = %.2f minutes\n", timeValue, finalMinutes);
    }

    else if (choice == 2)
    {

        printf("\nEnter Hours : ");

        scanf("%d", &hourValue);
        printf("Enter Minutes : ");
        scanf("%d", &minuteValue);
        finalMinutes = (hourValue * 60) + minuteValue;
        printf("\nThe given time %d:%d into Minutes = %.2f minutes\n\n", hourValue,minuteValue, finalMinutes);
    }

    else{
        printf("\nPlease choose the correct option and try again...");
    }

    return 0;
}