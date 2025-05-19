#include<stdio.h>
#include<string.h>
void main()
{
    char pass[100];
    while(1)
    {
        printf("Enter password=");
        scanf("%s",&pass);
        int res=strcmp(pass,"Admin123");
        if(res==0)
        {
            printf("valid input");
            break;
        }
        else
        {
            printf("invalid password please enter again\n");
        }
    }
}