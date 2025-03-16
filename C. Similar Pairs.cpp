#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int>v(n),v1;
    for(int i= 0;i<n;i++) cin >> v[i];

    sort(v.begin(),v.end());

    int cnt = 0;

    for(int i = 0;i<n;i++){
        if(abs(v[i] - v[i+1]) == 1){
            cnt = 1;
        }
    }
    int e = 0, o = 0;
    for(auto u: v){
        if(u & 1) o++;
        else e++;
    }

    if(o % 2 == 0 && e % 2== 0) cout << "YES\n";
    else if(o & 1 && e & 1 && cnt ) cout <<"YES\n";
    else cout << "NO\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) solve();
    
    return 0;
}
