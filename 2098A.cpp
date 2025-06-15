#include<bits/stdc++.h>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int num ; 
    vector<int> a(10) ;
    for(int i=0 ; i<10 ; i++) {
        cin >> num ;
        a[num]++ ;
    }
    vector<int> ans(10,0) ;

    for(int i=8 ; i>=0 ; i--) {
        for(int j=0 ; j<i ; j++) {
            if( a[j]>0 && j>i ) {
                a[j]-=1 ;
                ans[i]=j;
                break ;
            }
        }
    }
    cout<<'9';
    for(int i=0 ; i<9 ; i++) cout << ans [i] ;
    cout<<'\n' ;

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