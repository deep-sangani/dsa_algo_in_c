




#include <stdio.h> 

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
       
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    return -1; 
} 
  
int main() 
{ 
   int n,x;

    printf("How many numbers u are going to enter?: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

 printf("enter search number : ");
    scanf("%d", &x);


    int result = binarySearch(arr,0, n-1, x);
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