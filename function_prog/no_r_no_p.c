//make a function with no return with no parameter 
#include<stdio.h>
void test()
{
    int a;
    printf("enter a=");
    scanf("%d",&a);
    printf("a is %d",a);
}

void main()
{
    // call function
    test();
}