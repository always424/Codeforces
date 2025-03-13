#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n,k; cin >> n >> k;
    vector<ll>v(n);
    map<ll,ll>mp;
    for(ll i = 0;i<n;i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    for(ll i = 0;i<n-1;i++){
        mp[v[i]]--;

        ll a = v[i]+k;
        ll b = v[i] - k;

        if(mp[a] > 0 || mp[b] > 0){
            cout << "YES\n";
            return;
        }
        mp[v[i]]++;
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--)        solve();

    
    return 0;
}
