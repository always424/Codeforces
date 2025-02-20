#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, c; 
    cin >> n >> c;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    ll l = 0,r=1e9;
    while(l<r){
        ll mid = (l+r)/2;
        ll sum = 0;
        for(int i = 0;i<n;i++){
            sum+= (v[i] + 2 * mid) * (v[i] + 2 * mid) ;
            if(sum > c) break;
        }

        if(sum == c){
            cout << mid<<'\n';
            return;
        }
        else if(sum < c ) l = mid+1;
        else r = mid;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) 
        solve();
}
