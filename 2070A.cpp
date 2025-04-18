#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n; 
    if(n<=2) {
        cout<<n<<endl;
        return;
    } 
    int cnt=0 ;
    while(n>0){
        cnt++;
        n/=15;
    }
    cout<<cnt<<endl;
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