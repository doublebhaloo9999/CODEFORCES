#include<bits/stdc++.h>
#include<vector>

using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);
    int ans=0,n;
    string  s;
    cin>>s;
    n=s.size();

    for(int i=0; i<n ; i++ ) {
        ans += s[i] - '0' ;        
    }
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