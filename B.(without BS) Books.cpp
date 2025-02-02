#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void always424() {
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll mx = 0,left = 0,sum = 0;

    for (ll r = 0; r < n; r++) {
        sum += v[r];
        while (sum > t) {
            sum -= v[left];
            left++;
        }
        mx = max(mx, r - left + 1);
    }

    cout << mx << "\n";
}

int main() {
    init_code();
    always424();
}
