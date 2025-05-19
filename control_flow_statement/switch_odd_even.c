#include<stdio.h>
void main()
{
    int a=1,b;

    b=a%2;
    switch (b)
    {
    case 0:
    printf("%d is even number",a);
        break;
    case 1:
    printf("%d is even number",a);
        break;
    default:
    printf("%d is invalid number",a);
        break;
    }
}