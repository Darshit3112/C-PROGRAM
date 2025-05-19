#include<stdio.h>
void main()
{
    int d=0;
    for(int i=0;i<=5;i++)  // for make row

    {  
        for(int j=1;j<=i;j++)
        {
            d++;
            printf("%d",d);
        }
        
        printf("\n");
    }
}