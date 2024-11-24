#include<stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    
    while(t--) {
        int n,k;
        scanf("%d %d",&n,&k);
        
        int brand_cost[n],cost,b;
        
        for(int i=0 ; i<k ; i++) {
            scanf("%d %d",&b,&cost);
            brand_cost[b]+=cost;
        }
        //sorting the array
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (brand_cost[i] > brand_cost[j]) {
                    int temp = brand_cost[i];
                    brand_cost[i] = brand_cost[j];
                    brand_cost[j] = temp;
                }
            }
        }
    
        cost=0;
    
        for (int i=n ; i!=0 ; i-- ) {
            cost+=brand_cost[i];
        }
        printf("%d\n",cost);
    }
    return 0;
}