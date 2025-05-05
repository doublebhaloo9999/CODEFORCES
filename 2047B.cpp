#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n;
    string s;
    cin>>n>>s;

    if(n==1) {
        cout<<s<<endl;
        return;
    }

    int alpha[26] = {0};
    
    for(int i=0; i<n; i++) {
        alpha[s[i]-'a']++;
    }
    char maxChar = 0 ;
    char minChar = n ;

    int maxCount = 0 ;
    int minCount = n ;

    for( int i=0 ; i<26 ; i++ ) {
        if( alpha[i] >= maxCount ) {
            maxCount = max(alpha[i], maxCount);
            maxChar = 'a'+i ;
        }
        if( alpha[i] < minCount && alpha[i]) {
            minCount = min(alpha[i] , minCount) ;
            minChar =  'a'+i ;
        }
    }

    for (int i = n-1 ; i >= 0 ; i--) {
        if (s[i] == minChar) {
            s[i] = maxChar ;
            break;
        }
    }

    cout<<s<<endl;
     

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