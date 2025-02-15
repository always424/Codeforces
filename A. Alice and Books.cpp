#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   ll n; cin >> n;
   vector<ll>v(n);
   for(auto &u : v) cin >> u;
   ll ans = 0;
   for(int i = 0;i<n-1;i++) ans = max(ans,v[i]);
   cout << ans+v[n-1]<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) 
        solve();
}
