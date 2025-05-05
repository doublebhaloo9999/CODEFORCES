#include<bits/stdc++.h>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);

    int n,x;
    cin>>n>>x;

    int i=0;
    while(i<n) {
        if(i!=x) cout<<i<<" ";
        i++;
    }

    if(n>x) cout<<x<<" ";
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