#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);
    
    int n , cnt = 0 ;
    cin >> n ;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i] ;
    }

    sort(a.begin(),a.end());
    
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1])
            cnt++;
    }
    
    cout<< n-cnt <<endl ;
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