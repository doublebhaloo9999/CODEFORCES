#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              

    int n , k ;
    cin>>n>>k;

    int ans=0  , alice=0 ;  

    vector<int> num;
    for(int i=0 ; i<n ; i++) {
        int x;                                  
        cin>>x;
        num.push_back(x);
    }
    // for(int i=0; i<n ; i++) {
    //     cout<<num[i]<<" ";
    // }
    // cout<<endl;
    if(k==1) {
        cout<<ans<<endl;
        return;
    }
    

    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            if(  num[i]-num[j]==k ) ans++;
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