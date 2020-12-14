#include<stdio.h>

int main(){
    float profit[3] = {25,24,15};
    float weight[3] = {18,15,20};
    float ratio[3];
    float cap = 20;
    float maxProfit = 0;

    for(int i=0;i<3;i++){
        ratio[i]=profit[i]/weight[i];
    }

    for(int i=0;i<2;i++){
        if(ratio[i]<ratio[i+1]){
            float t = ratio[i];
            ratio[i] = ratio[i+1];
            ratio[i] = t;

            t = profit[i];
            profit[i] = profit[i+1];
            profit[i+1] = t;

            t = weight[i];
            weight[i] = weight[i+1];
            weight[i+1] = t;

        }
    }
 
 for(int i=0;i<3;i++){
     if(weight[i]<=cap){
       maxProfit = maxProfit + (profit[i]);
       cap = cap - weight[i];  
     }
     else if(cap < weight[i] && cap>0){
         maxProfit = maxProfit + (profit[i]*(cap/weight[i]));
         cap = cap - (weight[i]*(cap/weight[i]));
     }
 }

 printf("max profit is : %f",maxProfit);
 printf("\n remaining cap is : %f",cap);

}