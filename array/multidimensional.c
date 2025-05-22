#include<stdio.h>
void main()
{
    int n,n1,i,j;
    printf("enter the row=");
    scanf("%d",&n);
    printf("enter the column=");
    scanf("%d",&n1);
    int arr[n][n1];
    printf("enter the elements=");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("elements=");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n1;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}