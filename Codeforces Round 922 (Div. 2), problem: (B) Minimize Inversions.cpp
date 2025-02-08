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
        cin >> ab[i].first;
    }
    for(ll i = 0;i<n;i++){
        cin >> ab[i].second;
    }
    sort(ab,ab+n);
    for(auto u : ab){
        cout << u.first<<" ";
    }
    cout <<"\n";
    for(auto u : ab){
        cout << u.second<<" ";
    }
    cout <<"\n";
}

int main() {
    init_code();
    int t; 
    cin >> t;
    
    while (t--)
        always424();
}
