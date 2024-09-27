#include<stdio.h>
int main()
{
    int a,b;
    float result;
    char opt;
    printf("Choose an operator(+,-,*,/) to perform the operation in C calculator\n ");
        scanf("%c",&opt);
        if(opt=='/')
        {
            printf("You have selected: Division");

        }
        else if(opt=='*')
        {
            printf("You have selected: Multiplication");
        }
        else if(opt=='-')
        {
            printf("You have selected: Subtraction");
        }
        else if (opt=='+')
        {
            printf("You have selected: Addition");
        }
        printf("\nEnter the First number:");
        scanf("%d",&a);
        printf("\nEnter the second number:");
        scanf("%d",&b);


switch (opt)
{
    case'+':
    result=a+b;
    printf("Addition of %d and %d is %.2f",a,b,result);
    break;

    case'-':
    result=a-b;
    printf("Subtraction of %d and %d is %.2f",a,b,result);
    break;

    case'*':
    result=a*b;
    printf("Multiplication of %d and %d is %.2f",a,b,result);
    break;

    case'/':
    if(b==0)
    {
        printf("\n Divisor cannot be 0.Please enter another value");
        scanf("%d",b);


    }
    result=a/b;
    printf("Division of %d and %d is %.2f",a,b,result);
    break;

    default:
    printf("Something is wrong !!! Please check the options");
}
return 0;




}

