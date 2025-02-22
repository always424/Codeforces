#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int n; cin >> n;
   vector<int>v(n);
   for(int i =0;i<n;i++) cin >> v[i];
   int ans = 0;
   for(int i = 0;i<n;i++){
        ans=__gcd(ans,abs(v[i] - v[n-i-1]));
   }
   cout << ans <<"\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) 
        solve();
}
