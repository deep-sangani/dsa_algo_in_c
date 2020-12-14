#include<stdio.h>
#include <string.h>
int max(int a, int b);

int lcs( char *X, char *Y, int m, int n )
{ 
 if (m == 0 || n == 0)
 return 0;
 if (X[m-1] == Y[n-1])
 return 1 + lcs(X, Y, m-1, n-1);
 else
 return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

int max(int a, int b)
{
 return (a > b)? a : b;
}

int main()
{

 char X[] = "AGGTAB";
 char Y[] = "GXTXAYB";
 printf("AGGTAB");
 printf("\nGXTXAYB");
 printf("\nlcs is:");

 int m = strlen(X);
 int n = strlen(Y);

 printf(" %d", lcs( X, Y, m, n ) );

 return 0;
} 