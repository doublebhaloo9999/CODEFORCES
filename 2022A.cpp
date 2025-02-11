#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n , r , Sum=0;
    cin>>n>>r;
    int seats=2*r;
    int num ;
    int odd=0;
    int happy=0 ; 
    
    while(n--) {
        cin>>num;
       // seats-=num;
        Sum+=num;
        if(num%2==0) odd++ ; 
    }
    if(Sum<=seats) {
        cout<<Sum<<endl;
        return ;
    }
    while(Sum<seats) {
        Sum++;
        odd--;
    }
    cout<<Sum<<endl;
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