#include<bits/stdc++.h>
using namespace std;
bool compare (int a , int b) {
    return a>b;
}
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n , k ;
    cin>>n>>k;
    vector<int> chest; 
    int num=0;
    while(n--) {
        cin>>num;
        chest.push_back(num);
    }
    sort( chest.begin() , chest.end() , compare );
    int i=0,sum=0;
    for(i=0 ; sum<=k && i<chest.size() ; i++) {
        sum+=chest[i];
    }
    if(sum>k) sum-=chest[i-1];
    int ans=0;
    ans=abs(k-sum);
    cout<<ans<<endl;

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