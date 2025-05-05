#include<bits/stdc++.h>
using namespace std;

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int n,cnt=0;
    cin >> n ;
    
    string s;
    cin >> s;
    s="0"+s;

    for(int i=1;i<n+1;i++){
        if(s[i]!=s[i-1]) cnt++;
    }

    if(cnt>=3)
        cout<< cnt-2 + n<<"\n";
    else if(cnt==2)
        cout<< cnt-1 + n<<"\n";
    else 
        cout<< cnt+n<<"\n";
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