#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9+7;
void solve() {
     ll n; cin >> n;
     ll ans=((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
     cout << ans <<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) solve();
    
    return 0;
}
