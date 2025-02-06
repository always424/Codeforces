#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void always424() {
    ll n,k; cin >> n >> k;
    vector<ll>v(k);
    for(int i = 0;i<k;i++) cin >> v[i];
    sort(v.rbegin(),v.rend());
    ll sum = 0;
    ll c =0;
    for(int i = 0;i<k;i++){
        ll x = n - v[i];
        sum+=x;
        if(sum <= n-1) c++;
    }
    cout << c <<"\n";
}

int main() {
    init_code();
    int t; 
    cin >> t;
    
    while(t--)
        always424();
}
