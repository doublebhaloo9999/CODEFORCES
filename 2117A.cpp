#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    ll n, x,sum=0;
    cin >> n >> x ;

    bool used = false;
    bool ans = true;

    vector<ll> v(n);

    for(int i=0; i<n ; i++) {
        cin >> v[i];
        sum += v[i]-'0';
    }

    if( sum > x ) {
        cout << "NO\n";
        return;
    }

    for(int i=0; i<n ; i++) {
        if( v[i] == '1' && x > 0 ) {
            sum--;
            x--;
        }  
        if( sum > x ) {
            ans = false ;
        }
        
    }

    ( ans ) ? cout << "YES\n" : cout << "NO\n";

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