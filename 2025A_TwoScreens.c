#include<stdio.h>
#include<string.h>
int main () {
    int t,time=0,i,j;
    scanf("%d",&t);

    char screen1[100],screen2[100];
//    char *s1,*s2;
    
    while (t--) {

        time=0;
        scanf("%s",&screen1);
        scanf("%s",&screen2);
       // printf("%s\n%s\n",screen1,screen2);

        // s1=screen1;
        // s2=screen2;

        for (i=0 ; screen1[i]!='\0' ; i++) {
            screen1[i];            
        }
     //   printf("time=%d\n",time);
        time+=i;
       // printf("time=%d\n",time);

        for ( j=0 ; j!=i+1 ; j++) {
            
            if ( screen1[j] != screen2[j] ) {
                j=0;
         //       printf("Broke\n");
                break;
            }
            if ( j==i ) {
                time+=1;
           //     printf("time==%d\n",time);
             //   printf("j=%d\n",j);
            }   
        }

        while(screen2[j]!='\0') {
            time++;
            //printf("time=%d\n",time);
            j++;
        }
        // printf("strlen of s1 is : %d\n",strlen (screen1) );
        // printf("strlen of s2 is : %d\n",strlen (screen2) );
        
        printf("%d\n",time);
    }
    return 0;
}
