#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n , m ;
    cin >> n >> m ;

    vector<vector<int>> a(n, vector<int>(m)) ;
    
    int num = 0 , ans =0 ;

    for (int i=0 ; i<n ; i++ ) {
        for (int j=0 ; j<m ; j++ ) {
            cin >> a[i][j] ;
        }
    }

    
    if (ans == 0 || ans == n*m ) {
        cout << "0" << endl ;
    }
    // else cout << ans << endl ;

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