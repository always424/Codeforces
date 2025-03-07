#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll &u : v) cin >> u;
    sort(v.begin(), v.end());
    if(v[0] != 1 ) { 
        cout << "NO\n"; 
        return; 
    }
    ll sum = 1; 
    for(ll i = 1; i < n; i++) {
        if(sum < v[i]) {
            cout << "NO\n";
            return;
        }
        sum += v[i]; 
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) 
        solve();
    
    return 0;
}
