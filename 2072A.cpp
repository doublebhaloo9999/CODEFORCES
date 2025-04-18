#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);
    int n,k,p;              
    cin >>n>>k>>p;
    if ( n*p >= k && -n*p <= k) {
        cout<< (abs(k)+p-1) / p <<endl;
    }
    else {
    cout<<"-1"<<endl ;
    }
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