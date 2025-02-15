#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n,a,b; cin >> n >> a >> b;
    ll ans = 0;
    if(a >= b) ans = n*a;
    else{
        ll h = min(n,b);
        ll x = b-a;
        if(x > n) x = x - (x-n);
        ll rem = n-x;
        ll l = b, r = (b-x)+1;
        ans = (x*(b+r))/2;

        ans+= rem*a;
    }

    cout << ans <<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) 
        solve();
}
