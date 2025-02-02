#include<bits/stdc++.h>
using namespace std;

int solve();

int main() {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}

int solve() {
    int n,ans=0;
    cin>>n;
    int note[n];
        
    for (int i=0 ; i<n ; i++) {
        cin>>note[i];
    }

    for (int i=1 ; i<n ; i++ ) {
        if ( abs(note[i]-note[i-1])!= 5 && abs(note[i]-note[i-1])!= 7  ) {
                cout<<"NO"<<endl;
                return 0;
        }
    }

    cout<<"YES"<<endl;

    return 1;
}