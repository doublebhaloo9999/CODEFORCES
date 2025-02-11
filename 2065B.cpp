#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    string s;
    cin>>s;
    unsigned n=s.size();
    for(int i=n-1 ; i>=0 ; i--) {
        if(s[i]==s[i-1]) {
            cout<<1<<endl;
            return ;            
        }
    }
    cout<<s.size()<<endl;
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