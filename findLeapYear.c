#include<stdio.h>

int main()
{
    int leapyear;
    printf("Hey Program, Find leap year among the year\n");
    printf(" --- \n");
    printf("Input a year: ");
    scanf("%d", &leapyear);

    if (leapyear %100 == 0)
    {
        if (leapyear %400 == 0)
        {
            printf("Yeahoo! \n%d is a Leap Year", leapyear);
        }

        else
        {
            printf("%d is not a Leap Year", leapyear);
        }      
    }

    else if (leapyear %4 == 0)
    {
        printf("Yeahoo! \n%d is a Leap Year", leapyear);
    }

    else
    {
        printf("%d is not a Leap Year", leapyear);
    }
    
    
    return 0;
}