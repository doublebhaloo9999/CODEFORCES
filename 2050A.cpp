#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;

    int ans=0;
    
    for( int i=0 ; i<n ; i++) {
        string s;
        cin>>s;
        m -= s.size();
        if(m>=0) ans++;
    }    
    cout<<ans<<endl;
}

int main() {
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}