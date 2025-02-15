#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    vector<int> prfix(n + 1, 0);
    vector<int> rprfix(n + 1, 0);
    map<int, int> ind;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        prfix[i] = prfix[i - 1] + v[i];
    }


    rprfix[n] = v[n];
    ind[rprfix[n]] = n;
    
    for (int i = n - 1; i >= 1; i--) {
        rprfix[i] = v[i] + rprfix[i + 1];
        ind[rprfix[i]] = i;
    }
    reverse(rprfix.begin() + 1, rprfix.end());
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int a = lower_bound(rprfix.begin() + 1, rprfix.end(), prfix[i]) - rprfix.begin();
        if (a <= n && rprfix[a] == prfix[i]) {
            if (i < ind[rprfix[a]]) 
                ans = max(ans, i + a);
        }
    }
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
