#include<bits/stdc++.h>
#include<vector>

using namespace std;

// void Reverse(int &a[]) {
//     int num;
//     for(int i=0 ; i<a.size()/2 ; i++ )  {
//         num=a[i];
//         a[i]=a[s.size()-1] ;
//         a[s.size()-1] = num;
//     }
//}

void Replace (int &a[] , int &b[] )  {
    int i=a.size()-1 ,diff=; 
    while(i>-1) {
        diff=a[i]-a[i-1];
        b.pushback(diff);
        i--;
    }
    
}

void solve() {
    int n,num;
    cin>>n;

    if(n==1) {
        int num1;
        cin>>num1;
        cout<<num1<<endl;
        return;
    }

    vector <int> a(n),b(n-1);

    for(auto &i : a) {
        cin>>num;
        a.push_back(num);               
    }



}

int main() {
        int t;    
        cin>>t;

        while(t--) {
           solve();
        }
return 0;
}