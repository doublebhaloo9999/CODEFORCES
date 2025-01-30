#include<bits/stdc++.h>
using namespace std;
void solve() {
    ios_base::sync_with_stdio(0);
    int n,ans=0,sum=0,num=0;
    cin>>n;
    vector<int> odd ;
    vector<int> even ;

    for(int i=0 ; i<n ; i++) {
        cin>>num;
        if(num%2==0) even.push_back(num);
        else odd.push_back(num);
    }

    even.shrink_to_fit();
    odd.shrink_to_fit();

    stable_sort(odd.begin(),odd.end());
    stable_sort(even.begin(),even.end());

    for(int i=0 ; i<even.size() ; i++) {
        sum+=even[i];
        if(sum%2==0) {
            ans++;
            while(sum%2==0) sum/=2;
        }
    }
    for(int i=0 ; i<odd.size() ; i++) {
        sum+=odd[i];
        if(sum%2==0) {
            ans++;
            while(sum%2==0) sum/=2;
        }
    }
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