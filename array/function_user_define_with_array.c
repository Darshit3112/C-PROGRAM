#include <stdio.h>

void user(int arr[], char name[][100]) 
{
    for (int i = 0; i < 5; i++) {
        printf("\ninteger=%d", arr[i]);
        printf("\nchar=%s", name[i]);
    }
}

void main() 
{
    int i = 0, n = 5;
    int arr[n];
    char name[n][100];

    printf("Enter %d integer and string pairs:\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
        printf("Enter name %d: ", i + 1);
        scanf("%s", name[i]);
    }

    user(arr, name);
}
