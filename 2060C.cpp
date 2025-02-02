#include<bits/stdc++.h>
using namespace std;
bool compare(int a , int b) {
    return a > b ;
}
void solve() {
    ios_base::sync_with_stdio(0);
    int n , k , q ;
    cin>>n>>k;
    q=k ;
    vector <int> sum(k,0);

    while(k--) {
        int brand , cost ;
        cin>>brand>>cost;
        sum[brand-1] += cost;
    }
    sort( sum.begin(), sum.end() , compare );
    int ans = 0 ;
    for(int i=0 ; i < min(n,q) ; i++) {
        ans += sum[i];
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