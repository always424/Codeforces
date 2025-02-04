#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void always424() {
    ll n; cin >> n;
    vector<ll>v(n);
    for(ll i =0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(ll i = 0;i<n-2;i++){
        if(v[i] + v[i+1] > v[i+2]){
            cout << "YES\n";
            return ;
        }
    }
    cout << "NO\n";
}

int main() {
    init_code();
    // int t; cin >> t;
    // t= 0;
    // while(t--)
    always424();
}
