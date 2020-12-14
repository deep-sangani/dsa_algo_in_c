#include <stdio.h>

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main()
{int n,x;

    printf("How many numbers u are going to enter?: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

 printf("enter search number : ");
    scanf("%d", &x);


    int result = search(arr, n, x);
    if (result == 0)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Element is present at index %d   ", result);
    }

    return 0;
}