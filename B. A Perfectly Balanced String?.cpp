#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
      string s; cin >>s;
      map<char,int>mp;
      int mn = INT_MAX;
      set<char>st;
      for(int i = 0;i<s.size();i++){
        if(mp.count(s[i])){
            mn = min(mn,i-mp[s[i]] -1);

        }
        mp[s[i]] = i;
      }
    int u = mp.size();
    if(u <= mn+1 || u == s.size()) cout <<"YES\n";
    else cout <<"NO\n"; 

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) solve();
    
    return 0;
}
