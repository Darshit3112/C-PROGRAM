#include<stdio.h>
 void swap(int a,int b)
 {
    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("after swapping %d%d",a,b);
 }
 int main()
 {
    int x,y;
    printf("enter first value=");
    scanf("%d",&x);
    printf("enter second value=");
    scanf("%d",&y);

    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", x, y);

    swap(x,y);
    
    return 0;
 }