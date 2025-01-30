#include<bits/stdc++.h>
using namespace std;
void solve() {
     ios_base::sync_with_stdio(0);
    int n,a,b;
    cin>>n>>a>>b;

    (abs(a-b)%2==0 ) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

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