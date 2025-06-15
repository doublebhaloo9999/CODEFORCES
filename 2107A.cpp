#include<bits/stdc++.h>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n ; cin >> n ;
    
    set<int> s ;
    vector<int> a(n) ;

    for ( auto &i : a ) cin >> i , s.insert(i) ;

    if (s.size() < 2 ) {
        cout << "NO\n" ;
        return ;
    }
    else cout << "YES\n" ;

    cout << "1 " ;

    for ( int i =1 ; i<n ; i++ ) {
        if ( a[i] != a[0] ) {
            cout << "2 " ;
        }
        else cout <<"1 " ;
    }
    cout << "\n" ;

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