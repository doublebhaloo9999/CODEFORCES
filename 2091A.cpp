#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n;
    cin>>n;
    vector<int> a(10) ;
   
    bool ans =  false ;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a[num]++;
        if (a[0] >= 3 && a[1] >= 1 && a[2] >= 2 &&
            a[3] >= 1 && a[5] >= 1 && !ans ) {
                cout << i + 1 << endl;
                ans = true ;
            }
    }
    if (!ans) cout << 0 << endl;

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