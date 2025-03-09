#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n,x; cin >> n >> x;
    vector<ll>v(n);
    for(ll i = 0;i<n;i++) cin >> v[i];

    ll l = 0,r = 2000000005;

    while(l < r){
        ll mid = (l+r) / 2;
        ll total = 0;
        for(ll i = 0;i<n;i++) total += max(mid-v[i],0ll);

        if(total <= x) l = mid+1;
        else r = mid;
    }
    cout << l-1 <<"\n";


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) solve();
    
    return 0;
}
