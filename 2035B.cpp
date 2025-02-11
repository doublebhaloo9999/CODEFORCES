#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n,n1;
    cin>>n;
    if(n==1) {
        cout<<1<<endl;
        return ;
    }
    n1=n;
    int ans=0;
    while(n--) ans*=10;
    while(ans%2!=0 && ans%33!=0) {
        ans+=33;
        // ans*=10;
    }
    int ans2=ans;
    while(n1--) ans2/=10;

    ( ans2==1 ) ? cout<<ans<<endl : cout<<-1<<endl;  
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