#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
   int n,m,k; cin >> n >> m >> k;
   m++;
   vector<int>v(m);
   for(int i = 0;i<m;i++) cin >> v[i];
    int c = 0;
   int fedor = v[m-1];
   for(int i = 0;i<m-1;i++){
       if (__builtin_popcount((fedor ^ v[i])) <= k)  c++;
   }
   cout << c;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin >> t;
    // while(t--)
    solve();
    return 0;
}
