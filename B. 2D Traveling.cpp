#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n,k,a,b; cin >> n >> k >> a >> b;
    a--;
    b--;
    vector<ll>x(n),y(n);
    for(ll i =0;i<n;i++) cin >> x[i] >> y[i];

    ll nor = abs(x[a]-x[b]) + abs(y[a] - y[b]);
    ll mina = 1e18,minb=1e18;
    for(ll i = 0;i<k;i++){
        ll q = abs(x[i] - x[b]) + abs(y[i] - y[b]);
        minb = min(minb,q);
        ll w = abs(x[i] - x[a]) + abs(y[i] - y[a]);
        mina = min(mina,w);

    }
    cout << min(nor,minb+mina) <<"\n";
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    solve();
    
    return 0;
}
