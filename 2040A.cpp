#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n,k;
    cin>>n>>k;
    vector<int> odd , even ;
    int num;
    while(n--) {
        cin>>num;
        (num%2==0) ? even.push_back(num) : odd.push_back(num) ;
    }
    if( k%2 != 0 ) {
        if( even.size() > 0 ) {
            sort(even.begin(),even.end(),greater<int>());
            cout<<"YES\n"<<even[0]<<"\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    else if( k%2 == 0 ) {
        if( odd.size() > 0 ) {
            sort(odd.begin(),odd.end(),greater<int>());
            cout<<"YES\n"<<odd[0]<<"\n";
        }
        else {
            cout<<"NO\n";
        }
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
}