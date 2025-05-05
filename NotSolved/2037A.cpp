#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;

    // wrong answer for test 2

    int a[20] = {0};

    int ans,i;
    
    for(i=0;i<n;i++) {
        cin>>ans;
        a[ans-1]++;
    }
    
    ans = 0;
    for (int i = 0; i < 20; i++) {
        ans +=a[i]/2;
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