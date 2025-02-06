#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void always424() {
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> v(n);
    
    for(ll i = 0; i < n; i++)  cin >> v[i];

    ll c = 0;
    sort(v.begin(),v.end());
    for(ll i = 0; i < n; i++) {
        ll t = upper_bound(v.begin(),v.end(),r-v[i]) - lower_bound(v.begin(),v.end(),l-v[i]);
        if(l <= v[i] + v[i] &&v[i] + v[i] <= r) t--;
        c+=t;
    }


    cout << c/2 << "\n";  
}

int main() {
    init_code();
    int t; 
    cin >> t;
    
    while(t--)
        always424();
}
