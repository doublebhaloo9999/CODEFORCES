#include<bits/stdc++.h>
using namespace std;
int solve(int *diff);

int main() {
    int t,*diff;
    cin>>t;
    while (t--) {
        solve(diff);
    }
    return 0;
}

int solve(int *diff) {
    int n,ans=0;
    cin>>n;
    *diff=ans=0;
    int note[n];
        
    for (int i=0 ; i<n ; i++) {
        cin>>note[i];
    }

    for (int i=1 ; i<n ; i++ ) {
        if ( ( abs(note[i]-note[i-1])== 5 || abs(note[i]-note[i-1])== 7 ) + 1 ) {
                cout<<"NO"<<endl;
                return 0;
        }
    }

    cout<<"YES"<<endl;

    return 1;
}