#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int a , b ; 
    cin>>a>>b;
    if(a>=b) {
        cout<<a<<endl;
        return ;
    }          
    if ( (b-2*a) >0 ) {
        cout<<0<<endl;
        return ;
    }   
    for(int i=1 ; a<b ; i++) {
        a-=1;
        b-=2;
    }
    cout<<a<<endl;
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