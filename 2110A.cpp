#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n ;
    cin >> n ;
    
    vector<int> arr(n) ;
    for (int i=0 ; i<n ; i++) cin >> arr[i] ;

    sort( arr.begin() , arr.end() ) ;

    int minVal = arr[0] % 2  ;
    int maxVal = arr[n-1] % 2 ;

    if( minVal & maxVal ) {
        cout << "0\n" ;
        return ;
    }

    int ans = -1 ;

    for( int i=0 ; i<n ; i++ ) {
        ans++ ;
        if( minVal == arr[n-i-1] % 2 ) {
            break ; 
        }
        else if ( maxVal == arr[i] % 2 ) {
            break ;
        }
    }

    cout << max( 0 , ans ) << endl ;
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