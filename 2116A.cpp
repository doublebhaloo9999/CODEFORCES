#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,d;
    cin >> a >> b >> c >> d ;

    a=min(a,c) ;
    b=min(b,d) ;

    ( a >= b ) ? cout<<"Gellyfish\n" : cout<<"Flower\n"; 
                  
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