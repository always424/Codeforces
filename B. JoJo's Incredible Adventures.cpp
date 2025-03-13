#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    string s; cin >> s;
    ll n = s.size();
    s += s; 
    ll mx = 0, c = 0;
    for (ll i = 0; i < n * 2; i++) {
        if (s[i] == '1')    c++;
        else {
            mx = max(mx, c);
            c = 0;
        }
    }
    mx = max(mx, c); 

    if (mx > n)   cout << n * n << "\n";
    else {
        ll a = (mx + 1) / 2;
        ll b = (mx + 2) / 2;
        cout << a * b << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    while (t--) solve();
    
    return 0;
}
