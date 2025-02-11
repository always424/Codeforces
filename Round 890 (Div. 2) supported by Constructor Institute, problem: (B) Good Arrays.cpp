#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;

    ll sum = 0, cnt = 0;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        sum += x;
        if (x == 1) cnt++;
    }

    cout << ((sum>= cnt + n && n > 1) ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }

}
