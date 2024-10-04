#include<stdio.h>
int main()
{
    int any_number;
    printf("Enter any number = ");
    scanf("%d", & any_number);
    if (any_number % 2 == 0)
    {
        printf("The number is even number");
    }
    else
    {
         printf("The number is odd number");
    }
    
    return 0;
}
