#include<bits/stdc++.h>
using namespace std;
bool compare(int a , int b) {
    return a>b;
}
void solve() {
    int n , k , ans=0 , brand , cost ;
    cin>>n>>k;
    vector <int> sum(k,0);

    while(k--) {
        cin>>brand>>cost;
        sum[brand-1] += cost;
    }
    sort(sum.begin(), sum.end(), compare);
    for(int i=0 ; i<n ; i++) {
        ans+=sum[i];
    }
    cout<<ans<<endl;
}
int main() {
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}