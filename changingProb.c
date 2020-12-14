#include <stdio.h>
#include<math.h>


int main()
{
    int coin[4] = {1,5,6,9};
    int sum =10;
    int a[4][11];
    int n=4;
    int inf = 100000000;
    int i,j;
    int x,y;
 
    
    int dp[n+1][sum+1];
 
    for(j=0;j<=sum;j++)
        dp[0][j]=inf;
 
    
    for(i=1;i<=n;i++)
        dp[i][0]=0;
 
   
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=sum;j++)
        {
           
            if(j>=coin[i-1])
            {
                x=dp[i-1][j];
                y=1+dp[i][j-coin[i-1]];

                if(x<y)
                dp[i][j]=x;
                else
                {
                  dp[i][j]=y;  
                }
                
            }
 
            else
                dp[i][j]=dp[i-1][j];
        }
 
    }

    for(int i=1;i<5;i++){
        for(int j=0;j<11;j++){
            printf("%d  ",dp[i][j]);
        }
        printf("\n");
    }

    printf("minimum coins is : %d",dp[4][10]);
}