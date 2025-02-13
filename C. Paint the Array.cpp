#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<ll>v(n);
    for(int i = 0;i<n;i++) {
        cin >> v[i];

    }
    ll gcdans = 0,gcdans1 = 0;
    int ans= 1, ans1 = 1                                                                                                                                              ;
    for(int i = 0;i<n;i+=2){
        gcdans = gcd(gcdans,v[i]);
    }
    for(int i = 1;i<n;i+=2){
        gcdans1 = gcd(gcdans1,v[i]);
    }
    for(int i = 0;i<n;i+=2){
        if(v[i] % gcdans1 == 0){
            ans1 = 0;
            break;
        }
    }
    for(int i = 1;i<n;i+=2){
        if(v[i] % gcdans == 0){
            ans = 0;
            break;
        }
    }
    if(!ans && !ans1) cout <<"0\n";
    else if(ans) cout << gcdans<<"\n";
    else cout << gcdans1<<"\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    solve();
}
