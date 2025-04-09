#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int ans;
    string s;
    cin>>ans>>s;

    int dash =0 , underscore = 0 ;
    for (int i = 0; i < s.size() ; i++) if(s[i] == '-') dash++ ;
    
    underscore = s.size() - dash ;

    cout << "Dash = "<< dash << " Underscore = " << underscore << '\n';

    ans = 0 ;
    ans = ( dash / 2 )*( dash - dash / 2) * underscore ;

    cout << ans << endl ;
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