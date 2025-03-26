#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float fl;
typedef double dl;
int mod = 1e9+7;

void solve() {
  int n; cin >> n;
  vector<ll>v(n);
  ll sum  = 0,sum1=0,c=0,c1=0;
  for(int i =0;i<n;i++) {
    cin >> v[i];
    if(v[i]==100) c++;
  }
  c1= n-c;
  if(c % 2 == 0 && c > 1 || (c % 2==0) && c1%2==0 ) cout <<"YES\n";
  else cout <<"NO\n";

  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // int t; cin >> t;
    // while (t--) 
          solve();
    
    return 0;
}
