#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);	              
    int n , k , ans=1 ;
    cin>>n>>k;
    vector<int> a,diff;
    
    int num=0;
    cin>>num;
    a.push_back(num);
    
    for(int i=1;i<n;i++) {
        cin>>num;
        a.push_back(num);
    }
  //  stable_sort(a.begin(),a.end());
    for(int i=0 ; i<n-1 ; i++) {
        for(int j=0 ; j<n ; j++) {
            if(i==j) continue;
            diff.push_back(abs(a[i]-a[j]));
        }
    }
    stable_sort(diff.begin(),diff.end());
    int index;
    for(int i=0 ; i<diff.size() ; i++) {
        if(diff[i]%k==0) {
            ans++;
            index=i;
            break;
        }
    }             
    (ans) ? cout<<"YES"<<endl<<index<<endl : cout<<"NO"<<endl;

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