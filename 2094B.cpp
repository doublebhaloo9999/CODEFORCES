#include<bits/stdc++.h>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    
    int a[2];
    
    if(m>=r) {
        m-=r;
        a[1]=r;
    }
    else {
        a[1]=m;
        m=0;
    }
    l=abs(l);
    if(m>=l) {
        m-=l;
        a[0]=-l;
    }
    else {
        a[0]=-m;
    }

    cout<<a[0]<<" "<<a[1]<<"\n";

    // the difference between the two digits should be same
    // else the testcase show fails but code is correct

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