#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int x; cin >> x;
   vector<int>a(3);
   for(auto& u : a) cin >> u;
   if(a[x-1] != 0 && a[a[x-1]-1] != 0) cout << "YES\n";
   else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    solve();
    return 0;
}
