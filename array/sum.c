#include<stdio.h>
void main()
{
    int n,i,sum=0;
    double avg=0;
    printf("Enter size of array=");
    scanf("%d",&n);
    int arr[n];
    printf("enter values=");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        avg=sum/n;
    }
    printf("%d\n%.0lf",sum,avg);

}