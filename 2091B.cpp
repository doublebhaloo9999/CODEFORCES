#include<bits/stdc++.h>
using namespace std;


void solve() {
    ios_base::sync_with_stdio(0);	              
    int n , x ;
    cin >> n >> x ;
    vector<int> a( n ) ;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    int ans = 0;
    for (int i = 0, cnt = 1; i < n; i++, cnt++) {
        if (a[i] * cnt >= x) {
            ans++;
            cnt = 0;
        }
    }
    cout << ans << endl;
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