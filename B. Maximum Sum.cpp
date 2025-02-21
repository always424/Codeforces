#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,k; cin >> n >> k;
    vector<ll>v(n+1);
    for(int i = 1;i<=n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    vector<ll>prf(n+1,0);
    for(int i = 1;i<=n;i++) prf[i] = v[i]+prf[i-1];
    ll ans = prf[n-k];
    for(int i = n-k+1,j=2;i<=n; i++,j+=2){
        ll x = prf[i] - prf[j];
        ans = max(ans,x);
    }
    cout << ans <<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) 
        solve();
}
