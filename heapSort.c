#include <stdio.h>
int temp;
void swap_largest(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        swap_largest(arr, n, largest);
    }
}
void heap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        swap_largest(arr, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        swap_largest(arr, i, 0);
    }
}
int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n, i;
    printf("enter size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the value of array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    heap(arr, n);
    print(arr, n);
}
