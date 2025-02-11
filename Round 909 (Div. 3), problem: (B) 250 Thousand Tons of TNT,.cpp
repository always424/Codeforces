#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0;i<n;i++) cin >> v[i];
    ll ans = 0;
    for(int i = 1;i<=n;i++){
        if(n % i == 0){
            ll mx = -1e18,mn=1e18;
            for(int j = 0;j<n;j+=i){
                ll sum = 0;
                for(int z = j;z<i+j;z++){
                    sum+=v[z];
                }
                mx = max(mx,sum);
                mn = min(mn,sum);
            }
            ans = max(ans,mx-mn);

        }
    }
    cout << ans <<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
