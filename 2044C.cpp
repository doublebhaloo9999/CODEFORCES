#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int ans=0;
    (m>a) ? ans+=a : ans+=m;
    (m>b) ? ans+=b : ans+=m;
    if( ans<2*m ) {
        (ans+c<2*m) ? ans+=c : ans=2*m;
    }
    cout<<ans<<endl; 
}
int main() {
        ios_base::sync_with_stdio(0);
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}