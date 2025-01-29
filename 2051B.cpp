#include<bits/stdc++.h>
using namespace std;

void solve() {
    ios_base::sync_with_stdio(0);
    int n,a,b,c,days=0,sum;
    cin>>n>>a>>b>>c;

    sum=a+b+c;

    days+=(n/sum)*3;

    if( n%sum > a+b ) {
        days+=3;
        }
    else if( n%sum > a ) {
        days+=2;
        }
    else if( n%sum>0 ) {
        days++;
        }    

    cout<<days<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
        int t;    
        cin>>t;

        while(t--) {
            ios_base::sync_with_stdio(0);
            solve();
        }
return 0;
}