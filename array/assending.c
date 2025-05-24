#include<stdio.h>
void main()
{
    int arr[]={12,11,10,9,8,7,6,5,4,3};
    
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("print array:");
    for(int i=0;i<7;i++)
    {
        printf("\n%d",arr[i]);
    }
}