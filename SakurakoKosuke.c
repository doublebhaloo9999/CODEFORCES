#include<stdio.h>
int main () {
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        if( ( abs(n) % 2 ) == 0 )  
            printf("Sakurako\n");
        else if ( ( ( (abs(n) % 2) == 0 ) ) + 1 )
            printf("Kosuke\n");
    }
    return 0;
}