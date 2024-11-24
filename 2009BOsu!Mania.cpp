#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    char ch;
   
    cin>>t;
   
    while (t--) {
        cin>>n;
        int ans[n];
        for(int i=0 ; i<n ; i++) {
   
            for(int j=0 ; j<5 ; j++) {
                cin>>ch;
                
                if (ch=='#')
                    ans[i]=j;
            }
            n--;
            while(n) {
                cout<<ans[n];
                n--;
            } 
        }

        cout<<endl;
        free(ans);
    }
    return 0;
}