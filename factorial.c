#include<stdio.h>
int main()
{
    int number,fact=1;
    printf("Enter the number to find the factorial:");
    scanf("%d",&number);
    if(number<0)
    {
        printf("\n the entered number is negative.there is no factorial for given number!!");
    }
    if(number==0||number==1)
    {
        printf("\n the entered numbers's factorial is 1.");
    }
    for(int i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("\n the factorial of the entered number%d is:%d",number,fact);
    return 0;
}