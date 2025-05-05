#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n;
    int x;
    cin>>n>>x;

    ll sum=0;
    int num;
    for(int i=0 ; i < n ; i++ ) {
        cin>>num;
        sum+=(ll)num;
    }
    (sum%n==0 && sum/n==x) ? cout<<"YES\n" : cout<<"NO\n";

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