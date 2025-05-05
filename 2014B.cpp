#include <bits/stdc++.h>
using namespace std;

// Count odd numbers between [n-k+1, n]
int count_odds(int start, int count) {
    int end = max(1, start - count + 1);
    return (start + 1) / 2 - (end) / 2;
}

void solve() {
    int n, k;
    cin >> n >> k;

    int odd_count = count_odds(n, k);

    if (odd_count % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
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
