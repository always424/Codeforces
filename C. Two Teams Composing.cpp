#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    set<int>st;
    map<int,int>freq;
    for(int i = 0;i<n;i++) {
        cin >> v[i];
        freq[v[i]]++;
        st.insert(v[i]);
    }
    int mx = 0,mx1 = st.size();
    for(auto u: freq)    mx = max(mx,u.second);
    if(mx1 == mx) cout << mx-1<<"\n";
    else cout << min(mx,mx1)<<"\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) solve();
    
    return 0;
}
