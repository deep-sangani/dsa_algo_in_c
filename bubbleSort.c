// #include <stdio.h>

// void bubbleSort(int arr[], int n)
// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int tmp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tmp;
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     printf("enter the length of array : ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("\n enter values of array : ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     bubbleSort(arr, n);
//     printf("sorted array is: ");
//     for (int i = 0; i < n-1; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

#include <stdio.h>

int main()
{
  int array[100], n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {int min =c;
    for (d = c+1 ; d < n; d++)
    {
        if(min>array[d]){
            min=array[d];
        }  
      
    }
    swap       = array[c];
        array[c]   = array[min];
        array[min] = swap;
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

  return 0;
}