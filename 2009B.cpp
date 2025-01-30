#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    char ch;
    vector<int> v;

    for(int i=0 ; i<n ; i++ ) {
        for(int j=0 ; j<4 ; j++ ) {
            cin>>ch;
            if(ch=='#') v.push_back(j+1);
        } 
    }
    int temp;
    for(int i=0 ; i<v.size() /2 ; i++ ) {
        temp=v[i];
        v[i]=v[v.size()-1-i];
        v[v.size()-1-i]=temp;
    }
    for(int i=0 ; i<v.size() ; i++ ) {
        cout<<v[i]<<" ";
    }
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