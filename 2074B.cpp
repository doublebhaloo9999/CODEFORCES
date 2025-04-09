#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n;
    cin>>n;
    vector<int> a(n) ;

    for(int i=0; i<n; i++) {
        cin>>a[i] ;
    }

    while(a.size() != 1 ) {
        a.push_back(a[0]+a[1]-1) ;
        a.erase(a.begin(), a.begin()+2 ) ;
    }              
    
    cout << a[0] << endl;
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