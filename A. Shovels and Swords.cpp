#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float fl;
typedef double dl;
int mod = 1e9+7;


void solve() {
   ll a,b; cin >> a >> b;
    
   cout << min({a,b,(a+b)/3})<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) 
    solve();
    
    return 0;
}
