#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    long long n;
    cin>>n;
    long long ans=1;
    while(n>3) {
        n/=4;
        ans*=2;
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