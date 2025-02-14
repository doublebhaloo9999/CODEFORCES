#include<bits/stdc++.h>
using namespace std;
int findComplement(int num)
{
    int ans = 0;
    for (int i = 0; num > 0; i++) {
        ans += pow(2, i) * (!(num % 2));
        num /= 2;
    }
    return ans;
}
void solve() {
    ios_base::sync_with_stdio(0);	              
    int x , y ,ans=1 ;
    cin>>x>>y;

    if(abs(x-y)==1) {
        cout<<"Yes"<<1<<endl;
        return ;
    }
    else if(abs(x-y)==0){
        cout<<"No"<<2<<endl;
        return ;    
    }
    int comX=findComplement(x);
    (comX)
}
int main() {
        ios_base::sync_with_stdio(0);
        int t;    
        cin>>t;

        while(t--) {
           solve();
           cout<<t<<endl<<endl;
        }
return 0;
}