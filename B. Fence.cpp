#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   ll n,k; cin >> n >> k;
   vector<ll>v(n+1),prf(n+1,0);
   for(int i = 1;i<=n;i++) cin >> v[i];

   for(int i = 1;i<=n;i++){
        prf[i] = prf[i-1]+v[i];
   }

   vector<ll>a;

   for(int i = 0;i<=n-k;i++){
        a.push_back(prf[k+i] - prf[i]);
   }
   ll mn = *min_element(a.begin(),a.end());
   for(int i = 0; i,a.size();i++){
         if(a[i] == mn){
            cout << i +1;
            return;
         }
   }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin >> t;
    // while (t--) 
    solve();
    return 0;
}
