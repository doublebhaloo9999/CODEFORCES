#include<bits/stdc++.h>

using namespace std;

void replace(int &a,int& b) {
        ios_base::sync_with_stdio(0);

        int c=a+b,d=abs(a-b);
        a=c;
        b=d;
}

int main() {
        ios_base::sync_with_stdio(0);
        
        int a,b;
        cin>>a>>b;

        replace(a,b);
        cout<<a<<endl<<b<<endl;

return 0;
}