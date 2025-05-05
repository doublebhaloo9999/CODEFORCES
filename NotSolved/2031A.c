#include<stdio.h>
int main () {
    int t,count=0,n;

    scanf("%d",&t);
    
    while (t--) {
        scanf("%d",&n);
        int h[n];
        
        for ( int i=0 ; i < n ; i++ ) {
            scanf("%d",&h[i]);
        }
        // for (int i=0 ; i< n/2 ; i++ ) {
        //     int temp=h[i];
        //     h[i]=h[n-i-1];
        //     h[n-i-1]=temp; 
        // } 
        printf("%d\n",(n/2));
    
    }
    return 0;
}