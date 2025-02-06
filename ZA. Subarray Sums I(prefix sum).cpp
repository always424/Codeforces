/*
*   author: Nafis Abdullah
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, a, b) for (int i = a; i < b; i++)
 
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
 
int main() {
    // init_code();
    ll n,x; cin >>n >> x;
    ll v[n+1] = {0};
    ll prefix[n+1] = {0};
    for(ll i = 1;i<=n;i++){
        cin >> v[i];
        prefix[i] = prefix[i-1] + v[i];
    }
 
    map<ll,ll>mp;
    mp[0] = 1;
    ll ans = 0;
    for(ll i = 1;i<=n;i++){
        ans+=mp[prefix[i] - x];
        mp[prefix[i]]++;
    }
    cout << ans;
    return 0;
}
