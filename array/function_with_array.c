#include<stdio.h>
void user(int arr[])
{
    for(int i=0;i<6;i++)
    {
        printf("\n%d",arr[i]);
    }
}
void main()
{
    int arr[]={12,32,33,23,21,3232};
    user(arr);
}