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
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
}

int main() {
    init_code();
    int n; cin >> n;
    vector<int>v(n+1,0);
    for(int i = 1;i<=n;i++){
        cin >> v[i];
        v[i] = v[i-1] + v[i];
    }
    // for(auto u : v) cout << u << " " ;
    int q; cin >> q;
    vector<int>v1(q);
    for(int i = 0;i<q;i++) cin >> v1[i];
    for(auto x : v1)
        cout << lower_bound(v.begin(),v.end(),x) - v.begin() <<"\n";
    return 0;
}
