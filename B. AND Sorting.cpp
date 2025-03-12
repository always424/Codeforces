#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int x, j;
    for(int i = 0; i < n; i++)     cin >> v[i];
    for(int i = 0; i < n; i++) {
        if(v[i] != i) {
            x = v[i];
            j = i;
            break;
        }
    }
    for(int i = j; i < n; i++) if(v[i] != i)    x &= v[i];  
        
    
    cout << x << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
