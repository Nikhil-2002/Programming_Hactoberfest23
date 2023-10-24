#include<stdio.h>
#include<math.h>
int main()  {

    int num,num1,digits,rem,sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    num1=num;
    digits=(int)(log10(num)+1);
    while(num>0){
        rem=num%10;
        sum=sum+pow(rem,digits);
        num/=10;
    }
    if(sum==num1){
        printf("%d is an armstrong number\n",num1);
    }else{
         printf("%d is not an armstrong number\n",num1);
    }
    return 0;
    }