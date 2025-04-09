#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  int64_t dash = count(s.begin(), s.end(), '-');
  int64_t under = n - dash;
  
  cout << "Dash = "<< dash << " Underscore = " << under << '\n';
  
  int64_t ans = (dash / 2) * (dash - dash / 2) * under;
  cout << ans << '\n';
}

int main() {
  int tt;
  cin >> tt;
  while (tt --> 0) {
    solve();
  }
  return 0;
}