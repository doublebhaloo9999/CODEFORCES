#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n;
    cin>>n;
    if(n==1) {
        cout<<0<<endl;
        return ;
    }
    vector<int> a(n) ;
 
    for(int i=0 ; i<n ; i++ )   cin>>a[i];

    stable_sort(a.begin() , a.end() );

    for(int i=1 ; i<a.size() ; i++) {
        if(a[i]==a[i-1] ) {
            a.erase( a.begin()+i-1 , a.begin()+i );
            i--;
        }
    }
    if(a.size()==1) {
        cout<<n<<endl;
        return ;
    }
    int ans=n-a.size();
    cout<<ans<<endl;
    // for(int i=0 ; i<a.size() ; i++ ) cout<<a[i]<< " ";
    // cout<<endl;
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