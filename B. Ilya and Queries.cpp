#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s; cin >> s;
    int q; cin >> q;
    vector<int> v;
    for(int i = 1; i < s.size(); i++) v.push_back(s[i-1] == s[i] ? 1 : 0);
    vector<int> prf(v.size() + 1, 0);
    for(int i = 1; i <= v.size(); i++) prf[i] = prf[i-1] + v[i-1];  
    while(q--) {
        int l, r; cin >> l >> r;
        cout << prf[r-1] - prf[l-1] << "\n"; 
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    return 0;
}
