#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n,k;
    cin>>n>>k;
    double leaves=0.0;
    while(k--) {
        leaves+=pow(n,n);
        n--;
        if(n==0) break;
    }
    if(leaves==0) {
        cout<<"YES\n";
        return;
    }
    ((int)leaves%2==0) ? cout<<"YES\n" : cout<<"NO\n";
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