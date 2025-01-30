#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n,k,leaves=0,ans=0;
    cin>>n>>k;
    while(k--) {
        leaves+=pow(n,n);
        n--;
    }
    (leaves%2==0) ? cout<<"YES\n" : cout<<"NO\n";
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