#include<bits/stdc++.h>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n;
    string s;
    cin>>n>>s;
    
    int ans=0,cnt=0;
    
    for (int i=0;i<n;i++) { 
        if(s[i]=='1') {
            ans-=1 ;
            cnt++;
        } 
        else {
            ans+=1;
        }
    }
    ans+=cnt*n;
    cout<<ans<<endl;
}
int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}