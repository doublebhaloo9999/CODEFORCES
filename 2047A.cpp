#include<bits/stdc++.h>
using namespace std;
int main() {
        int t;    
        cin>>t;

        while(t--) {
            int n;
            cin>>n;
            int sum=0,piecePerDay=0;
            double max=100.0;

            while(n--) {
                cin>>piecePerDay;
                sum+=piecePerDay;

                for(double i=1 ; i < 5 ; i+2 ) {
                    max = pow( i, 2);
                    cout<<max<<"\n";
                }
            }
        }
return 0;
}