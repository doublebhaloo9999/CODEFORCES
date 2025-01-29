#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a,n,ans=0,s=0;
    cin>>n;

    while(n--) {
        cin>>a;
        s+=a;

        if( s>0 && s%2==0 ) ans++ ;
        while ( s>0 && s%2 == 0 ) s/=2;
    }
    cout<<ans<<endl;
}

int main() {
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}