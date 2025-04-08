#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(m) for(int i = 0; i < m; i++)
#define fro(m) for(int i=1; i<m; i++)
#define _ "\n"
#define nll cout<<'\n'
#define ff first
#define ss second
#define inff (1<<30)
#define srt(m) sort(m.begin(),m.end())
#define srtr(m) sort(m.rbegin(),m.rend())
#define rev(m) reverse(m.begin(),m.end())

// g++ -o file file.cpp
ll bit_cnt(int v){
    ll cnt = 0;
    if(v == 0) return 1;
    while(v){
        cnt++;
        v >>=1;
    }
    return cnt;
}
void solve() {
    int n; cin >> n;
    vector<int>v(n);
    fr(n) cin >> v[i];
    ll cnt = 0;
    map<ll,ll>mp;
    fr(n){
        ll x = bit_cnt(v[i]);
        mp[x]++;
    }
    for(auto u : mp){
        ll x =u.second;
        cnt+= (x*(x-1))/2;
    }
    cout << cnt;
    nll;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    while (t--) 
        solve();

    return 0;
}
