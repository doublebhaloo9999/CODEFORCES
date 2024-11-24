#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[3];
        cin>>a[0]>>a[1];
        
        if ( a[0] == 1 ) {
            if ( a[1] == 2)
                printf("3\n");
            else if (a[1]==3)
                printf("2\n");
        }

        else if ( a[0] == 2 ) {
            if ( a[1] == 1)
                printf("3\n");
            else if (a[1]==3)
                printf("1\n");
        }

        else if ( a[0] == 3 ) {
            if ( a[1] == 2)
                printf("1\n");
            else if (a[1]==1)
                printf("2\n");
        }

    return 0;
}