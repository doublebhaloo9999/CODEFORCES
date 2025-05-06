#include<bits/stdc++.h>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    if( n%2 == 0 ) {
        cout<<"-1\n" ;
        return ;
    }

    cout << n << " " ;
    for ( int i=1 ; i<n ; ++i) {
        cout << i << " " ;
    }
    cout << endl ;
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