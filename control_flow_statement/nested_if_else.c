#include<stdio.h>
void main()
{
    int num=77;
    if(num>50)
    {
        if(num>70)
        {
            printf("%d is grater than 70",num);
        }
        else
        {
            printf("%d is between 50 to 70",num);
        }
    }
    else
    {
        printf("%d is less than 50",num);
    }
}