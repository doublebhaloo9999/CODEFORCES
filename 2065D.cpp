#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
    return a>b;
}
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n , m ;
    cin>>n>>m;
    vector<int> a(n) , b(m) ;

    for(int i=0 ; i<n ; i++) cin>>a[i];
    for(int j=0 ; j<m ; j++) cin>>b[j];

    for(int i=0 ; i<n ; i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int j=0 ; j<m ; j++) cout<<b[j]<<" ";
    cout<<endl;
    sort( a.begin() , a.end() , compare );
    sort( b.begin() , b.end() , compare );

    // int ans=0;
    // if(a[0]>b[0]) {
    //     for(int i=0 ; i<m ; i++) a.push_back(b[i]);
    //     n=a.size();
    //     for(int i=0 ; i<n ; i++) {
    //         ans+= a[i] *(n-i);
    //     }
    // }
    // else  {
    //     for(int i=0 ; i<n ; i++) b.push_back(a[i]);
    //     n=b.size();
    //     for(int i=0 ; i<n ; i++) {
    //         ans+= b[i]*(n-i) ;
    //     }
    // }
    // cout<<ans<<endl;
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