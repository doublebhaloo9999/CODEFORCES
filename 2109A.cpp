#include<bits/stdc++.h>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n ;
    cin >> n ; 
    bool flag = false ;
    
    vector<char> s(n) ;
    int sum = 0 ;

    cin >> s[0] ;
    sum += s[0] - '0' ;

    for( int i = 1 ; i < n ; i++ ) { 
        cin >> s[i] ;
        sum += s[i] - '0' ;
        if ( (s[i] == '0') && (s[i-1] == '0') && (!flag) ) {
            flag = true ;
        }
    }

    if( sum == n && !flag ) flag = true ;

    ( flag ) ? cout << "YES\n" : cout << "NO\n" ;

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