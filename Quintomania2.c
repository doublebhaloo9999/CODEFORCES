#include<stdio.h>
int main() {
    int t;
    scanf("%d\n",&t);
   // printf("t is %d\n",t);
    
    while(t--) {
        int n;
        scanf("%d",&n);
        //  printf("n is %d\n",n);
        
        int ndiff[n-1],b,c;  
        
        for(int i=0; i<n-1 ; i++ ) {
            scanf("%d ",&b);
            //printf("0th is %d\n",b);
            scanf("%d ",&c);
    
            ndiff[i]=b-c;

            int a=ndiff[i-1]-ndiff[i];            
           // printf("a is %d\n",a);

            if( (a==5 || a==7 || a==-5 || a==-7) ) {
                printf("NO\n");
                break;
            }
            printf("YES\n");
        }
        // printf("nth ndiff is %d\n", ndiff[0]);
        // printf("n-1th ndiff is %d\n", ndiff[1]);
    }
    return 0;
}