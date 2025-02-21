#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        freq[x - (i + 1)]++;
    }
    ll c = 0;
    for (auto u: freq) {
        c += 1LL * u.second * (u.second- 1) / 2; 
    }
    
    cout << c << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) 
        solve();
}
