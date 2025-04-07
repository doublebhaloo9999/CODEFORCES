#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int l,r,d,u ;
    cin>>l>>r>>d>>u;

    ((l-r)==(u-d)) ? cout<<"Yes"<<endl : cout<<"No"<<endl;

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