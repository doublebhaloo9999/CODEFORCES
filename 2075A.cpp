#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	         
    cin.tie(0);
    cout.tie(0);
    
    long long n, k;
        cin >> n >> k;
        long long ans = 0;
        
        if (n % 2 == 1) {
            n -= k;
            ans = 1;
        }
        
        k -= 1;
        ans += (n + k - 1) / k;

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