#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int x , y , a;
    cin >> x >> y >> a;
    
    if ( x > a ) {
        cout << "NO" << endl ;
        return ;
    }

    bool ans = true ;

    int count = (a / (x+y) ) * ( x+ y ) ; 

    if ( count >= a+1) {
        ans = true  ;
    }
    else if (count+x >= a+1 ) ans = false ;

    (ans) ? cout << "YES" << endl : cout << "NO" << endl ;
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