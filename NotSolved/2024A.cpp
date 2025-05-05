#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);
    int a , b ; 
    cin>>a>>b;
    if(a>=b) {
        cout<<a<<endl;
        return ;
    }          
    if(b/2<a)
        cout<<a-(b/2)+b%2<<endl;              
    else 
        cout<<"0"<<endl;
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