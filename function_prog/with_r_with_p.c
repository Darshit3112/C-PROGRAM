#include<stdio.h>
int addition(int a,int b)
{
    int ans=a+b;
    return ans;
}
void main()
{
    int a,b;
    printf("enter a and b=");
    scanf("%d%d",&a,&b);
    int ans=addition(a,b);
    printf("addition =%d",ans);
}