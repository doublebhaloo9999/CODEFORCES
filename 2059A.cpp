#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n ; cin >> n ;
    
    set<ll> a , b ;
    ll x ;

    for ( int i = 0 ; i < n ; i++) {
        cin >> x ;
        a.insert(x ) ;
    }
    for ( int i = 0 ; i < n ; i++) {
        cin >> x ;
        b.insert(x) ;
    }

    if( a.size() + b.size() < 4 ) {
        cout << "NO\n" ;
    } else {
        cout << "YES\n" ;
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