#include <iostream>
using namespace std;

void solve() {
    int n; 
    cin >> n;

    string a, b; 
    cin >> a >> b;

    int count0_a_even = 0, count0_b_odd = 0;
    int count0_b_even = 0, count0_a_odd = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) { // Even index
            count0_a_even += (a[i] == '0');
            count0_b_even += (b[i] == '0');
        } else { // Odd index
            count0_a_odd += (a[i] == '0');
            count0_b_odd += (b[i] == '0');
        }
    }

    // Check the conditions
    bool condition1 = (count0_a_even + count0_b_odd) >= (n + 1) / 2;
    bool condition2 = (count0_b_even + count0_a_odd) >= n / 2;

    cout << (condition1 && condition2 ? "YES" : "NO") << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) solve();
}