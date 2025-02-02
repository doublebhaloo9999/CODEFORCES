#include<bits/stdc++.h>
using namespace std;
void solve() {    
	ios_base::sync_with_stdio(0);
    int n,gold=0,a,k,ans=0;
    cin>>n>>k;

    for(int i=1;i<=n;i++) {
        cin>>a;
        if(a>=k) gold+=a;
        if(a==0 && gold>0 ) {
            gold--;
            ans++;
        }
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