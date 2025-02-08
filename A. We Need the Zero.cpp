#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void always424() {
    ll n; cin >> n;
    vector<ll>v(n);
    ll ind = 0;
    for(ll i = 0;i<n;i++) {
        cin >> v[i];
    }
    ll ans = 0;
    for(ll i = 0;i<n;i++){
        ans^=v[i];
    }
    if(ans == 0) cout << "0\n";
    else if(n % 2 == 1) cout << ans <<"\n";
    else{
        cout <<"-1\n";
    }
}

int main() {
    init_code();
    int t; 
    cin >> t;
    while (t--)
        always424();
}
