#include<stdio.h>
int main()
{
    int num=10;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("\n%d",i);
        }
    }return 0;
}