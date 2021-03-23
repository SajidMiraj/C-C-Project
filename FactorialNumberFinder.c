#include<stdio.h>

int main()
{   
    int init=1, num, factorial=1; 
    printf("Enter Your factorial Number: ");
    scanf("%d", &num);
    while (init<=num)
    {
        factorial*=init;
        init++;
    }

    printf("The number of %d fectorial is = %d", num, factorial);
    
    return 0;
}