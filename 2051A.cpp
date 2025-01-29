#include<bits/stdc++.h>
#include<vector>
using namespace std;

void solve() {
    int n;
    cin>>n;
    
    vector <int> a(n) , b(n) ;
    for ( auto &i : a ) cin>>i;
    for ( auto &i : b ) cin>>i;

    int max_dif=a[n-1] ; 

    for ( int i=0 ; i <  n-1 ; i++ ) 
        max_dif+=max( 0 , a[i] - b[i+1] ) ; 
    
    cout<<max_dif<<endl;

}

int main() {
        int t;    
        cin>>t;

        while(t--) {
            solve();
        }
return 0;
}