#include<stdio.h>
int addition()
{
    int a,b;
    printf("enter a and b=");
    scanf("%d%d",&a,&b);
    int ans=a+b;
    return ans;
}
void main()
{
    int ans=addition();
    printf("addition=%d",ans);
}
