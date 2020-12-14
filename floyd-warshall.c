#include <stdio.h>



void main()
{int n;

    printf("\nEnter the number of nodes:");
    scanf("%d", &n);
    int cost[n+1][n+1];
    printf("\nEnter the adjacency matrix:\n");

    for (int i = 1; i <= n; i++){
 for (int j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            
        }
    }

    for(int k =1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
             if(cost[i][j]<(cost[i][k]+cost[k][j])){
                 cost[i][j]=cost[i][j];
             }else{
                 cost[i][j]=(cost[i][k]+cost[k][j]);
             }
            }
        }
    }
printf("ans is :\n\n");
    for (int i = 1; i <= n; i++){
 for (int j = 1; j <= n; j++)
        {
            printf("%d  ", cost[i][j]);
            
        }
        printf("\n");
    }
       

   
}
