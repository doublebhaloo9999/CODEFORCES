#include<bits/stdc++.h>

using namespace std;

bool isPrime(int num)  {
    if (num <= 1) {
        return false;
      }
    int i ;
    for (i = 2; i <= num/2; ++i) {
        if (num % i == 0) {
            return false ;
        }
    }
    return true ;
}

void solve() {
    ios_base::sync_with_stdio(0);	              
    int x, k;
    cin >> x >> k;
    if (k > 1 && x > 1) cout << "NO";
    else if (k == 1) {
        cout << ( isPrime(x) ? "YES" : "NO");
    } 
    else {
        cout << ((k == 2) ? "YES" : "NO");
    }
    cout << endl ;
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