//with paramerter no return
#include<stdio.h>
void addition(int a,int b)
{
    int ans=a+b;
    printf("addition =%d",ans);
}
void subtraction(int a,int b)
{
    int ans=a-b;
    printf("\nsubtraction =%d",ans);
}
void multiplication(int a,int b)
{
    int ans=a*b;
    printf("\nmultiplication =%d",ans);
}
void division(int a,int b)
{
    int ans=a/b;
    printf("\ndivision =%d",ans);
}

void main()
{
    int x,y;
    printf("Enter two value=");
    scanf("%d%d",&x,&y);
    addition(x,y);
    subtraction(x,y);
    multiplication(x,y);
    division(x,y);
}


