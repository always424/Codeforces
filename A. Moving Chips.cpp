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
        if(v[i] == 1) ind = i;
    }
    ll c =0;
    int ok = 0;
    for(ll i = 0;i<n-1;i++){
        if(v[i] == 1){
            while(v[i+1] == 0 && ind > i) {
                c++;
                i++;
            }
        }
    }
    cout << c <<"\n";
}

int main() {
    init_code();
    int t; 
    cin >> t;
    while (t--)
        always424();
}
