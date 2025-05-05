#include<bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
    int greater = max(a, b);
    int smallest = min(a, b);
    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            return i;
    }
}

void solve() {
    cin.tie(0);
    cout.tie(0);
 
    int a;
    int b;
    
    cin >> a >> b ;

    cout<< LCM(a, b) << endl;
}
int main() {
        ios_base::sync_with_stdio(0);
         cin.tie(0);
 
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}