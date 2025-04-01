#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(m) for(int i = 0; i < m; i++)
#define _ "\n"
#define ff first
#define ss second

void solve() {
   int n; cin >> n;
   vector<pair<ll, ll>> v(n);
   fr(n) {
       cin >> v[i].ff;
       v[i].ss = i + 1;
   }

   int c = 0;
   sort(v.begin(), v.end());  

   fr(n){
            for(int j=i+1; j<n; j++){
                if(v[i].ff*v[j].ff>2*n) break;
                if(v[i].ff*v[j].ff==v[i].ss+v[j].ss) c++;
            }
        }

   cout << c << _;  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    while (t--) solve();

    return 0;
}
