#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int n; cin >> n;
   vector<int>a(n),b(n-1),c(n-2);
   for(int i = 0;i<n;i++) cin >> a[i];

   for(int i = 0;i<n-1;i++) cin >> b[i];

   for(int i = 0;i<n-2;i++) cin >> c[i];


   ll as = accumulate(a.begin(),a.end(),0ll);
   ll bs = accumulate(b.begin(),b.end(),0ll);
   ll cs = accumulate(c.begin(),c.end(),0ll);
   cout << as - bs <<"\n" << bs-cs;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   //  int t;  cin >> t;
   //  while (t--) 
    solve();
    return 0;
}
