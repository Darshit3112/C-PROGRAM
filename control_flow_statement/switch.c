#include<stdio.h>
void main()
{
    int a=10,b=20;
    char c='+';
    switch (c)
    {
    case '+':
    printf("add=%d",(a+b));
        break;
    case '-':
    printf("add=%d",(a-b));
        break;
    case '*':
    printf("add=%d",(a*b));
        break;
    case '/':
    printf("add=%d",(a/b));
        break;
    
    default:
    printf("invalid input!");
        break;
    }
}