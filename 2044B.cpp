#include<bits/stdc++.h>
using namespace std;

void solve() {
    ios_base::sync_with_stdio(0);	              
    string s,ans ;
    cin>>s;
    for (int i=s.size() ; i>=0 ; i--) {
        if(s[i]=='w') ans.push_back('w') ;
        else if(s[i]=='p') ans.push_back('q') ;
        else if (s[i]=='q') ans.push_back('p') ;    
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