#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);

    int n ;
    cin >> n ; 
    ll ans = (n/15) *3 ;

    n %= 15 ;

    for(int i=0 ; i<=n ; i++) {
        if ( i%3 == i%5 ) ans++ ;
    }

    cout << ans << "\n" ;
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