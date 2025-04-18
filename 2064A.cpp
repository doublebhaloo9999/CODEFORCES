#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);

    int ans=0,n;
    string s;
    
    cin>>n>>s;
    
    for (int i=0 ; i<n-1 ; i++ ) {
        if (s[i]!=s[i+1]) ans++;
    }
    
    if(s[0]=='1') ans++;
    
    cout<<ans<<endl;
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