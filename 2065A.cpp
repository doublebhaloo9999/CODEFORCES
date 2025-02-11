#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    string s;
    cin>>s;
    int n=s.size();
    s.erase( s.begin()+n-2 , s.begin()+n );
    s.push_back('i');
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