#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void always424() {
    ll n, k; cin >> n >> k;
    vector<ll>v(n);
    for(ll i = 0;i<n;i++) cin >> v[i];
    ll c =1;
    for(ll i = 0;i<n;i++){
        if(v[i] == c) c++;
    }
    cout << (n-c + k ) / k <<"\n";

}

int main() {
    init_code();
    int t; 
    cin >> t;
    while (t--)
        always424();
}
