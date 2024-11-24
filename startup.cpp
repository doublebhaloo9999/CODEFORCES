#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int brand_cost[n],b,cost;
        for (int i=0 ; i<k ; i++ ) {
            cin>>b>>cost;
            brand_cost[b]+=cost;
            sort(brand_cost,brand_cost+n );
        }
        cost=0;
        for(int i=0 ; i <n ; i++ ) {
            cost+=brand_cost[i];
        }
        cout<<cost;
    }
    return 0;
}