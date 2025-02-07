#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void always424() {
    ll n; 
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) 
        cin >> v[i];
    
    sort(v.begin(), v.end());

    vector<ll> s;
    s.push_back(v[0]);

    for(ll i = 1; i < n; i++){
        if(v[i] != v[i - 1]) 
            s.push_back(v[i]);
    }

    ll ans = 0;
    for(ll i = 0; i < s.size(); i++){
        ll count = upper_bound(s.begin(), s.end(), s[i] + n - 1) - s.begin() - i;
        ans = max(ans, count);
    }

    cout << ans << "\n";
}

int main() {
    init_code();
    int t; 
    cin >> t;
    while (t--)
        always424();
}
