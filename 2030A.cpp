#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n , Min =1000 , Max=0 ; 
    cin>>n;
    int num;
    for(int i=0 ; i<n ; i++ ) {
        cin>>num;
        Min=min(Min,num);
        Max=max(Max,num);
    }
    n--;
    cout<<(Max-Min)*(n)<<endl;
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