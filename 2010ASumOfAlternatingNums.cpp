#include<bits/stdc++.h>
using namespace std;
int main () {
    int t,ans,n;
    cin>>t;

    int a[100];

    while(t--) {
        ans=0;
        cin>>n;
        for ( int i=0 ; i<n ; i++ )  {
            cin>>a[i];
            
            if(i%2!=0 || i==1)
                ans-=a[i];
            else if(i%2==0 || i==0)
                ans+=a[i];
        }
   
    cout<<ans<<endl;
   
    }

    return 0;
}