#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n-2] , i;
    for ( i = 0; i < n-2; i++ ) {
        cin >> a[i];
    }

    bool flag = true;
    for ( i = 0; i <= n - 5; i++ ) {
        if ( a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1 ) {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
