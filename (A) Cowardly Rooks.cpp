#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,m; cin >> n >> m;
    set<int>r,c;
    int m1 = m;
    while(m--){
        int x,y; cin >> x >> y;
        r.insert(x);
        c.insert(y);
    }
    if(n <= m1){
        cout << "NO\n";
        return;
    }
    if(r.size() == m1 && c.size() == m1) cout <<"YES\n";
    else cout <<"NO\n";
    // cout << r.size() <<" " << c.size() << m1; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    solve();
    return 0;
}
