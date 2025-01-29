#include<bits/stdc++.h>
using namespace std;

void solve() {
    ios_base::sync_with_stdio(0); 

    int n , k , ans=0;
    cin>>n>>k;

    if(n<k || k==1) {
        cout<<n<<endl;
        return;
    }

    while (n > 0) {
        ans+= (n%k) ;
        n /= k;
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