#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;  cin >> n >> k;
    vector<int> v(n), x;
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < k; i++){
        int q; cin >> q;
        if(x.empty() || x.back() > q) x.push_back(q);
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < x.size(); i++) {
            ll a = pow(2,x[i]);
                if(v[j] % a == 0){
                    v[j]+=pow(2,x[i]-1);
                }
            
        }
    }

    for (auto u : v) cout << u << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
