#include <stdio.h>
#include <conio.h>
void main()
{
    int num1;
    int num2;
    char op;
    
    printf("enter num1:");
    scanf("%d",&num1);
    
    printf("enter num2:");
    scanf("%d",&num2);
    
    printf("enter op:");
    scanf("\n %c",&op);
    
    if(op=='+')
    {
        printf("sum= %d",num1+num2);
    }
    else if(op=='-')
    {
        printf("sub= %d",num1-num2);
    }
    else if(op=='*')
    {
        printf("product=%d",num1*num2);
    }
    else if(op=='/')
    {
        printf("div = %d",num1/num2);
    } 
    else 
    {
        printf("ivalid operator");
    } 
}    