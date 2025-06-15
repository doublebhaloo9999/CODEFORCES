#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    ll x , y ;
    cin >> x >> y ;

    if (x + 1 >= y && (x + 1 - y) % 9 == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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