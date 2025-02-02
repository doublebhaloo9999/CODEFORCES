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
<<<<<<< HEAD
    sort( sum.begin(), sum.end() , compare );
    int ans = 0 ;
    for(int i=0 ; i < min(n,q) ; i++) {
        ans += sum[i];
=======
    sort(sum.begin(), sum.end(), compare);
    for(int i=0 ; i<n ; i++) {
        cout<<sum[i]<<endl;
>>>>>>> 44b7ad6f4ce1f2d238b5f85cbde1d29b13acc74d
    }
}
int main() {
    ios_base::sync_with_stdio(0);
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}}
