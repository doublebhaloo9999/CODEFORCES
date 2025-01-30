#include<stdio.h>
int main () {
    int t,ans,n;
    scanf("%d",&t);
    int a[100];
    while(t--) {
        ans=0;
        scanf("%d",&n);
        for ( int i=0 ; i<n ; i++ )  {
            scanf("%d",&a[i]);
            
            if(i%2!=0 || i==1)
                ans-=a[i];
            else if(i%2==0 || i==0)
                ans+=a[i];
        }
    printf("%d\n",ans);
    }

    return 0;
}