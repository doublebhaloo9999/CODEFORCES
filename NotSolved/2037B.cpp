#include <bits/stdc++.h>
using namespace std;

void solve() {
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;
    
    int i,j;

    vector<int> nums(k);
    for (i = 0; i < k; ++i) cin >> nums[i];

    unordered_map<int, int> cnt;
    
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] <= k) {
            cnt[nums[i]]++;
        }
    }

    int trgt = k - 2;
    pair<int, int> ans = {-1, -1};

    for (i = 1; i * i <= trgt; ++i) {
        if (trgt % i == 0) {
            j = trgt / i;

            if (i == j) {
                if (cnt[i] > 1) {
                    ans = {i, i};
                }
            } else {
                if (cnt[i] > 0 && cnt[j] > 0) {
                    ans = {i, j};
                }
            }
        }
    }

    cout << ans.first << " " << ans.second << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
