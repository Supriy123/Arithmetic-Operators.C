/*C program using arithmetic operators*/
#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,mul,div,mod;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    printf("The sum of num1 & num2 is %d\n",sum);
    printf("The sub of num1 & num2 is %d\n",sub);
    printf("The mul of num1 & num2 is %d\n",mul);
    printf("The div of num1 & num2 is %d\n",div);
    printf("The mod of num1 & num2 is %d\n",mod);

    return 0;

}