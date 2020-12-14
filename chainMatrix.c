#include <stdio.h>
int MatrixChainMul(int arr[], int n) {
 int minMul[n][n];
 int j, q;
 for (int i = 1; i < n; i++)
 minMul[i][i] = 0;
 for (int L = 2; L < n; L++) {
 for (int i = 1; i < n - L + 1; i++) {
 j = i + L - 1;
 minMul[i][j] = 10000000;
 for (int k = i; k <= j - 1; k++) {
 q = minMul[i][k] + minMul[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
 if (q < minMul[i][j])
 minMul[i][j] = q;
 }
 }
 }
 return minMul[1][n - 1];
}
int main(){
    int n;
    printf("enter size of array : ");
scanf("%d",&n);
 int arr[n]; 
  printf("Enter value of matrix:\n");
    for(int i = 0;i < n; ++i){
    	scanf("%d", &arr[i]);
    }
 
 printf("Minimum number is  %d ", MatrixChainMul(arr, n));
 getchar();
 return 0;
}