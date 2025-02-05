#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n;
    cin>>n;              
    vector<int> a(n);
    
    for(int i=0 ; i<n ; i++) cin>>a[i] ;
    int num;
    for(int i=0 ; a.size()!=1 ; i++ ) {
        stable_sort( a.begin() , a.end() ) ;
        num=a[0]+a[1];
        num/=2;
        a[0]=num;
        a.erase(a.begin()+1,a.begin()+2);
    }
    cout<<a[0]<<endl;
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