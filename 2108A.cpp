#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n ;
    
    ll ans=0;

    for ( int i=1 ; i<= n ; i++ ) {
        for (int j=1 ; j <= n ; j++) {
            ans += abs (i-j) ;
        }
    }

    cout << ans << endl ;
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