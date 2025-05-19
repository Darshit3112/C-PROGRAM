#include<stdio.h>
#include<string.h>
void main()
{
    int a;
    while(1)
    {
        printf("Enter number=");
        scanf("%d",&a);
        if(a>0)
        {
            printf("%d is Valid number",a);
            break;
        }
        else
        {
            printf("%d is invlaid number\n",a);
        }

    }
}