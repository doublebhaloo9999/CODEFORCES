#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    int b[t],people=0,p;
    char ch;
    while (t--) {
        cin>>ch>>p;
        if (ch=='P') {
            people+=p;
        }
        else if(ch=='B') {
            people-=p;

            if (people<0) {
                cout<<"YES\n";
                people=0;
            }
            else if (people>=0)
                cout<<"NO\n";
        }
    }
    return 0;
}