#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n; cin >> n;
    vector<int>v(n+1),v1(n+1);
    for(int i = 1;i<=n;i++) cin >> v[i];
    for(int i = 1;i<=n;i++) cin >> v1[i];

    int l = 0,r=0;

    for(int i = 1;i<=n;i++) {
        if(v[i] != v1[i]){
            l = i;
            break;
        }
    }
    for(int i = n;i >= 1;i--) {
        if(v[i] != v1[i]){
            r = i;
            break;
        }
    }
    while(l-1 > 0 && v1[l - 1] <= v1[l]) l--;
    while(r +1 <= n && v1[r] <= v1[r + 1]) r++;
    
    cout << l <<" " << r <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--)    solve();
    return 0;
}
