#include<bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true; // 2 is the only even prime number
    }
    if (num % 2 == 0) {
        return false; // eliminate even numbers greater than 2
    }
    for (int i = 3; i * i <= num; i += 2) { // check odd divisors up to sqrt(num)
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    ios_base::sync_with_stdio(0);
    int x, k;
    cin >> x >> k;
    if (k > 1 && x > 1) {
        cout << "NO";
    } else if (k == 1) {
        cout << (isPrime(x) ? "YES" : "NO");
    } else {
        cout << ((k == 2) ? "YES" : "NO");
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); // Tie cin to cout for faster I/O
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}