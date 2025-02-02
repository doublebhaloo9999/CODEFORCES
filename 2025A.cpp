#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    string str1,str2;
    cin>>str1>>str2;
    int size1 = str1.size() , size2 = str2.size();
    int n=min(size1,size2);
    int count=0;

    for (int i = 0; i < n; i++) {
        if( str1[i] == str2[i] ) {
            count++;
        } else {
            break;
        }
    }
           
    int ans = str1.size() + str2.size() - max(count,1) +1 ;

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