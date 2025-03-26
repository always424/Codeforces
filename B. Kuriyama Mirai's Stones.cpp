#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float fl;
typedef double dl;
int mod = 1e9+7;

void solve() {
  int n; cin >> n;
  vector<ll>v(n),prf(n,0),prf_s(n,0);
  for(int i =0;i<n;i++) cin >> v[i];
  prf[0]=v[0];
  for(int i = 1;i<n;i++)  prf[i] = v[i]+prf[i-1];

  sort(v.begin(),v.end());
  prf_s[0]=v[0];
  for(int i = 1;i<n;i++)  prf_s[i] = v[i]+prf_s[i-1];
  int m; cin >> m;
  while(m--){
      int x,l,r; cin >> x >> l >> r;
      l--,r--;
      if(x == 1){
        cout << (l == 0 ? prf[r] : prf[r] - prf[l-1]) << "\n";
      }
      else{
            cout << (l == 0 ? prf_s[r] : prf_s[r] - prf_s[l-1]) << "\n";
      }
  }

  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // int t; cin >> t;
    // while (t--) 
          solve();
    
    return 0;
}
