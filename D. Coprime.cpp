#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i =0; i < n; i++) {
        cin >> v[i];
        mp[v[i]] = i+ 1; 
    }
    int mx = 0;
    vector<int> v1;
    for (auto& u : mp) v1.push_back(u.first);
    for (int i = 0; i <v1.size();i++) {
        for (int j = i; j < v1.size(); j++) {
            if (__gcd(v1[i], v1[j]) == 1) {
                mx = max(mx, mp[v1[i]] + mp[v1[j]]);
            }
        }
    }
    if (mx == 0) cout << "-1\n";
    else cout << mx << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) 
        solve();
}
