#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n; 
    cin >> n;
    vector<int> a(n);
    
    ll ans = 0;
    ll cnt = 0;
    ll Max = 0; 
    ll i;

    for ( i = 0 ; i < n; i++ ) {
        cin >> a[i];
        ans += a[i];
        cnt += (a[i] & 1);
        Max = max(Max,(ll) a[i]);     
    }

    if ( !cnt || cnt == n ) {
        cout << Max << '\n'; 
    } 
    else {
        cout << ans - cnt + 1 << '\n';
    }              
}
int main() {
        ios_base::sync_with_stdio(0);
         cin.tie(0);
 
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}