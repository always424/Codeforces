#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n,x; cin >> n >> x;
    vector<ll>a(n),b(n),c(n);
    for(ll i = 0;i<n;i++) cin >>a[i];
    for(ll i = 0;i<n;i++) cin >>b[i];
    for(ll i = 0;i<n;i++) cin >>c[i];
    ll s = 0;
    for(ll i = 0;i<n;i++){
        if((a[i] | x) != x) break;

        s|=a[i];
    }
    for(ll i = 0;i<n;i++){
        if((b[i] | x) != x) break;

        s|=b[i];
    }
    for(ll i = 0;i<n;i++){
        if((c[i] | x) != x) break;

        s|=c[i];
    }

    if(s == x) cout <<"YES\n";
    else cout <<"NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    solve();
    
    return 0;
}
