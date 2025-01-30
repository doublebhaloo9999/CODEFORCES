#include<bits/stdc++.h>
using namespace std;
void solve() {
        int n,ans=0,num=0,sum=0;
        cin>>n;
        while(n--) {
            cin>>num;
            if(num%2==0) ans++;
            else sum++;
        }
        cout<<ans+sum/2<<endl;
}
int main() {
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}