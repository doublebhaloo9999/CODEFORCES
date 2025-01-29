#include<bits/stdc++.h>

using namespace std;

int check( int t,int k );

int main () {

    int t,k;
    cin>>t;
    
    while (t--) {
        cin>>k;
        check(t,k);
        // for ( int i=0 ; i <k ; i++ ) {
        //     cout<<arr[i]<<"\n";
        // }
    }
    return 0;
}

int check ( int t,int k ) {

    int arr[k],temp=0;
        cin>>arr[0];

        for(int i=1 ; i<k ; i++) {
            cin>>arr[i];
  
            if (arr[i]<arr[i-1]) {
                temp     = arr[i]   ;
                arr[i]   = arr[i-1] ;
                arr[i-1] = temp     ;      
            }
        }
   
    for ( int i=0 ; i<k ; i++ ) {
        for ( int j=0 ; j<k ; j++ ) {
            if ( (j < (k/2)+1) && arr[i]*arr[j]>k) {
                cout<<arr[i]<<" "<<arr[j]<<"\n";
                return 1;
            }
            else if ( arr[i]*arr[j]>k ) {
                cout<<arr[i]<<" "<<arr[j]<<"\n";
            }            
        }
    }

    if (t==1) {
            cout<<"\n";

            for (int i=0 ; i<k ; i++ ) {
                cout<<arr[i]<<"\n";
            }
        }

    return 0 ;
}