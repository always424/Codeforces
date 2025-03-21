#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float fl;
typedef double dl;
int mod = 1e9+7;


void solve() {
  int n; cin >> n;
  vector<int>v(n);
  ll sum = 0;
  for(int i = 0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
  }
  if(sum % 3 != 0){
        cout << "0";
        return;
  }

  ll one_th = sum/3;
  ll two_th = 2*one_th;
  ll cnt = 0,ans=0;
  sum = 0;
  for(int i = 0;i<n-1;i++){
        sum+=v[i];
        if(sum == two_th) ans+=cnt;
        if(sum == one_th) cnt++;
  }

  cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // int t; cin >> t;
    // while (t--) 
    solve();
    
    return 0;
}
