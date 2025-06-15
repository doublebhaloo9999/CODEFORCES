#include<bits/stdc++.h>
using namespace std;

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int a , b ;
    cin >> a >> b ;
    
    if (b >= 2 * a) {
        cout << "0\n";
    } else {
        cout << min( a, 2 * a - b ) << "\n";
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