#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mod = 1e9+7;
void solve() {
   ll n; cin >> n;
   string s[5] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
   while(5 < n) n = (n/2)-2;
   
   cout << s[n-1] <<"\n";
   
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // int t; cin >> t;
    // while (t--) 
      solve();
    
    return 0;
}
