#include<stdio.h>
#include<math.h>
int main () {
    
    int t,n,k,leaves=0;
    scanf("%d",&t);
    
    while (t--) {
        scanf ("%d %d",&n,&k);
        
        for ( n-=k ; n!=n+k+1 ; n++ ) {
            leaves+=(int) pow(n,n) ;
        }

        (leaves) ? printf("yes\n") : printf("no\n") ;
    }
    return 0;
}