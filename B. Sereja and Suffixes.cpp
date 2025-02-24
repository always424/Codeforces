#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
set<int>s;
int n,m,a[100005];
void solve() {
   cin >> n >> m;
   for(int i = 1;i<=n;i++) cin >> a[i];
   for(int i = n; i >= 1;i--) {
        s.insert(a[i]);
        a[i] = s.size();
   }
   while(m--) {
        int l; cin >> l;
        cout << a[l] <<"\n";
   }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin >> t;
    // while(t--)
    solve();
    return 0;
}
