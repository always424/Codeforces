#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void always424() {
    ll n; cin >> n;
    pair<ll,ll>ab[n];
    for(ll i = 0;i<n;i++){
        cin >> ab[i].second;
    }
    for(ll i = 0;i<n;i++){
        cin >> ab[i].first;
    }
    sort(ab,ab+n);
    ll sum = ab[0].second;
    for(ll i  = 0;i<n-1;i++){
        sum+=ab[i].first+ab[i+1].second;
    }
    cout << sum <<"\n";
}

int main() {
    init_code();
    int t; 
    cin >> t;
    while (t--)
        always424();
}
