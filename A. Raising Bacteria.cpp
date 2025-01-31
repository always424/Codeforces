/*
   *****In The Name Of ALLAH*****
        author: Nafis Abdullah
        always424.
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void always424() {
    ll x; cin >> x;
    ll ans = 0;
    while(x){
        if(x&1) ans++;

        x >>= 1;
    }
    cout << ans ;
}

int main() {
    init_code();
    // int t; cin >> t;
    // while(t--)
    always424();
}
