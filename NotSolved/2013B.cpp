#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    // sort(a.begin(),a.end());

    // cout<<a[0]<<endl;
    // cout<<a[1]<<endl;

    for(int i=0 ; i<n-1; i++) {
        a[i+1]-=a[i];
    }
    cout<<a[n-1]<<endl;
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