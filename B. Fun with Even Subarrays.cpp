#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0;i<n;i++) cin >> v[i];

    int ans = 0;
    for(int i = n-1;i>=0;){
        if(i == 0) break;
        
            if(v[n-1] == v[i-1]) i--;
            else{
                ans++;
                i -= n-i;
            }
        
    }
    cout << ans <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) solve();
    
    return 0;
}
