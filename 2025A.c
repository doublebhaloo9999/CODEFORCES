#include<stdio.h>
#include<string.h>
int main () {
    int t,time=0,i,j;
    scanf("%d",&t);

    char screen1[100],screen2[100];
    
    while (t--) {

        time=0;
        scanf("%s",&screen1);
        scanf("%s",&screen2);
    
        for (i=0 ; screen1[i]!='\0' ; i++) {
            screen1[i];            
        }
        
        time+=i;

        for ( j=0 ; j!=i+1 ; j++) {
            if ( j==i ) {
                time+=1;
                break;
            }
            else if ( screen1[j] != screen2[j] ) {
                j=0;
                break;
            }
        }
        
        while( screen2[j]!='\0' ) {
            time++;
            j++;
        }
        
        printf("%d\n",time);
    }
    return 0;
}
