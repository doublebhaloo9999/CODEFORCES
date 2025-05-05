#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    
    if(n==1) {
        ll x;
        cin >> x;
        cout <<2*x<<" "<<x<<endl;
        return ;
    }

    ll a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    cout<<abs(a[0][0]-a[0][1])<<" ";

    int i = 1;
    int j = 0;

    while(j<n) {
        cout<<a[0][j]<<" ";
        j++;
    }
    while(i<n) {
        cout<<a[i][n-1]<<" ";
        i++;
    }

    cout<<endl;
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