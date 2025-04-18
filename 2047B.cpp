#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);
    int n;
    string s;
    cin>>n>>s;

    if(n==1) {
        cout<<s<<endl;
        return;
    }

    int i;
    for(i=1;i<n;i++) {
        if(s[i]!=s[i-1]) break;
    }
    
    s[i]=s[i-1];

    cout<<s<<endl;
    
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