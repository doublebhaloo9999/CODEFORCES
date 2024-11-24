#include<stdio.h>
int main () {
    int t;
    scanf("%d",&t);

    char str[4];

    while(t--) {
        scanf("%s",str);

        if ( str[0] > str[2] )
            printf("%c>%c\n", str[0] , str[2]);
        else if ( str[0] < str[2] )
            printf("%c<%c\n", str[0] , str[2]);
        else if ( str[0] == str[2] )
            printf("%c=%c\n", str[0] , str[2]);
    }
    return 0;
}