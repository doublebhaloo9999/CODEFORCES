#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    cin.tie(0);
    cout.tie(0);
    
    int n,i;
    cin>>n;
   
    string s;
    cin>>s;

    vector<int> ans(n);

    int l=1;
    int g=n;
    
    for (i=n-1;i>=0;i--) {
        if(s[i]=='<') {
            ans[i+1]=l;
            l+=1;
        }
        if(s[i]=='>') {
            ans[i+1]=g;
            g-=1;
        }
    }

    if(s[0]=='<') {
        ans[0]=g;
    }
    else if(s[0]=='>') {
        ans[0]=l;
    }
    
    for(i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
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