#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    cin.tie(0);
    cout.tie(0);
    
    ll n ;
    cin >> n ;

    int sq = ceil(sqrt(n)) ;

    if(sq * sq == n) {
        cout << "0 " << sq << "\n" ;
    }
    else {
        cout<<"-1\n" ;
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