#include <stdio.h>
int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{
 if (n == 0 || W == 0)
 return 0; 

 if (wt[n - 1] > W)
 return knapSack(W, wt, val, n - 1);

 else
 return max(val[n - 1] + knapSack(W - wt[n - 1],wt, val, n - 1),knapSack(W, wt, val, n - 1));
}

int main()
{
int n;
 int W ;
printf("enter size of array : ");
scanf("%d",&n);
 int val[n];
 int wt[n];
  printf("Enter value and weight of items:\n");
    for(int i = 0;i < n; ++i){
    	scanf("%d%d", &val[i], &wt[i]);
    }
 
    printf("Enter size of knapsack:");
    scanf("%d", &W);


 

 printf("%d", knapSack(W, wt, val, n));
 
}