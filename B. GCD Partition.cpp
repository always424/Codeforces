#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >>n;
    vector<ll>v(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        v[i] = v[i - 1] + x; 
    }

    ll ans= 0;
    
    for (int i = 1; i < n; i++) ans = max(ans, __gcd(v[i], v[n] - v[i]));

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) 
        solve();
}
