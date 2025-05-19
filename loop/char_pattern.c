#include<stdio.h>
void main()
{
    char input,d='A';
    printf("enter input");
    scanf("%c",&input);
    for(int i=1;i<=(input-'A'+1);i++)  // for make roWK
    {  
        for(int j=1;j<=i;j++)
        {
            printf("%c",d);
        }
        d++;
        printf("\n");
    }
}