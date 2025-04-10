#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    string s;
    cin >> s ;
    int n = s.size() ;
    int zero = 0 ;
    int Z = 0 ;
    
    for (int i= n-1 ; i >= 0 ; i--) {
        if ( s[i] != '0') Z++ ;
        else if ( Z > 0 ) zero++ ;
    }

    cout << n - zero - 1 << endl ;
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