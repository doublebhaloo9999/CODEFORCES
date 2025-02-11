#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n;
    cin>>n;
    int i=1;
    for(int count=0 ; count<n ; count++ ) {
        cout<<i<<" ";
        i+=2;
    }
    cout<<endl;
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