#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);
    int l,r,d,u ;
    cin>>l>>r>>d>>u;

    if(l==r && r==d && d==u) 
        cout<<"Yes\n";
    else 
        cout<<"No\n";              
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