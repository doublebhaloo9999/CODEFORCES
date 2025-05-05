#include <bits/stdc++.h>
using namespace std;

// Function to solve a single test case
void solve() {
    int n, k;
    cin >> n >> k;

    // Input vectors to store the two arrays
    vector<int> l(n), r(n);
    for (int i = 0; i < n; ++i) cin >> l[i];  // Read left array
    for (int i = 0; i < n; ++i) cin >> r[i];  // Read right array

    long long ans = 0;

    // Min-heap to keep track of the top (k - 1) largest 'b[i]' values (where b[i] = min(l[i], r[i]))
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; ++i) {
        int a = max(l[i], r[i]);  // a[i] = max(l[i], r[i])
        int b = min(l[i], r[i]);  // b[i] = min(l[i], r[i])

        ans += a;  // Add all a[i] values to the answer

        // If k > 1, we need to include the top (k - 1) largest b[i] values to the total sum
        if (k > 1) {
            if ((int)minHeap.size() < k - 1) {
                // If heap isn't full yet, push b[i]
                minHeap.push(b);
            } else if (!minHeap.empty() && b > minHeap.top()) {
                // If current b[i] is larger than the smallest in heap, replace it
                minHeap.pop();
                minHeap.push(b);
            }
        }
    }

    // Add the (k - 1) largest b[i] values stored in the heap to the answer
    while (!minHeap.empty()) {
        ans += minHeap.top();
        minHeap.pop();
    }

    // Final output: sum of all a[i] + (k - 1) best b[i] + 1
    cout << ans + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);  // Fast IO
    cin.tie(nullptr);                  // Untie cin from cout

    int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        solve();  // Solve each test case
    }

    return 0;
}
