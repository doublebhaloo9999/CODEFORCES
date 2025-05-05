#include <bits/stdc++.h>

using namespace std;

void solve() {
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    int mn = k , mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    int s = -1;
    bool flag = false;

    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        if (b != -1 && !flag) {
            if (s == -1) s = a[i] + b;
            else if (s != a[i] + b) flag = true;
        }
    }

    if (flag) {
        cout << 0 << '\n';
        return;
    }

    if (s == -1) {
        int diff = mx - mn;
        cout << max(0, k - diff + 1) << '\n';
        return;
    }

    if (mn > s || s - mn > k || mx > s || s - mx > k) {
        cout << 0 << '\n';
        return;
    }

    cout << 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
