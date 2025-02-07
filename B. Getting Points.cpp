#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, a, b) for (int i = a; i < b; i++)

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ll isok(ll points, ll p) {
    return points >= p;
}

void always424() {
    ll n, p, l, tt;
    cin >> n >> p >> l >> tt;
    ll task = 1 + (n - 1) / 7;
    ll le = 0, r = n;
    while (le < r) {
        ll mid = (le + r) / 2;
        ll points = min(mid * 2, task) * tt + mid * l;
        if (isok(points,p) == 0 ) le = mid + 1;
        else r = mid;
    }
    cout << n - le << "\n";
}

int main() {
    init_code();
    int t; cin >> t;
    while (t--)
        always424();
}
