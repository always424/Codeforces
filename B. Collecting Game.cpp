#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i <n; i++) cin >> v[i];
    vector<int> a=v;

    sort(v.begin(), v.end());  
    
    vector<ll> prf(n + 1, 0);
    prf[0] = v[0];
    for (int i = 1; i < n; i++)  prf[i] = prf[i - 1] + v[i];
    

   map<int,int>mp;

   mp[v[n-1]] = n-1;

   for(int i = n-2;i>=0;i--){
        if (mp.find(v[i]) == mp.end()) mp[v[i]] = i;
        
        if(prf[i] >= v[i+1]) mp[v[i]] = mp[v[i+1]];
    }

    for(auto u : a) cout<<mp[u]<<" ";
    cout <<"\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) solve();
    
    return 0;
}
