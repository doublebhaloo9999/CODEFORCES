//clockwork
/*
B. Clockwork
time limit per test1.5 seconds
memory limit per test512 megabytes
You have a sequence of n
 time clocks arranged in a line, where the initial time on the i
-th clock is ai
. In each second, the following happens in order:

Each clock's time decreases by 1
. If any clock's time reaches 0
, you lose immediately.
You can choose to move to an adjacent clock or stay at the clock you are currently on.
You can reset the time of the clock you are on back to its initial value ai
.
Note that the above events happen in order. If the time of a clock reaches 0
 in a certain second, even if you can move to this clock and reset its time during that second, you will still lose.

You can start from any clock. Determine if it is possible to continue this process indefinitely without losing.

Input
The first line of input contains a single integer t
 (1≤t≤104
) — the number of test cases.

For each test case, the first line contains a single integer n
 (2≤n≤5⋅105
) — the number of time clocks.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the initial times set on the clocks.

It is guaranteed that the sum of n
 over all test cases does not exceed 5⋅105
.

Output
For each test case, print "YES" (without quotes) if it is possible to continue this process indefinitely, or "NO" (without quotes) otherwise.

You can output "YES" and "NO" in any case (for example, strings "yEs", "yes" and "Yes" will be recognized as a positive response).
*/
#include<bits/stdc++.h>
using namespace std;

void solve() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,ans=1,a;
    cin>>n;

    for(int i=0 ; i<n ; i++) {
        cin>>a;

        if( a<= 2*max(i,n-i-1) ) ans=0;

    }
    (ans) ? cout<<"YES"<<endl :  cout<<"NO"<<endl; 
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