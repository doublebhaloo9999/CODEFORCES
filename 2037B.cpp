#include<bits/stdc++.h>
using namespace std;
bool compare (int a , int b) {
    return a>b;
}
void solve() {
    ios_base::sync_with_stdio(0);	              
    int k,q;
    cin>>k;
    q=k ;
    int n=0,m=0,least=100000;
    vector<int> a;
    while(k--) {
        cin>>n;
        a.push_back(n);
    }
    n=0;
    int c,d ;
    stable_sort(a.begin(), a.end() , compare);
    for( int i=0 ; i<a.size() ; i++) {
        if(a[i]==0) continue;
        c=a[i];
        for( int j=0 ; j<a.size() ; j++) {
            if(a[j]==0) continue;
            d=a[j];
            if( abs(c*d-q)<=least ) {
                n=c;
                m=d;
            }
            least=min(least,abs(c*d-q));
        }
    }
    cout<<n<<" "<<m<<endl;
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