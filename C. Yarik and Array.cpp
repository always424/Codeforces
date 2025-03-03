#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int n; cin >> n;
   vector<int>v(n);
   for(int i = 0;i<n;i++) cin >> v[i];

   int curr =  0, ans = INT_MIN;
   for(int i = 0;i<n;i++){
      if(i > 0 && (abs(v[i-1] % 2)) == (abs(v[i] % 2))){
         curr = v[i];
         ans=max(ans,curr);
      }
      else
      {
         curr = max(v[i] ,curr+v[i]);
         ans = max(ans,curr);
      }
   }

   cout << ans<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;  cin >> t;
    while (t--) 
    solve();
    return 0;
}
