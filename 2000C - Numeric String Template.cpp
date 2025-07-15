#include <bits/stdc++.h>
using namespace std;

void naf() {
   int n; cin >> n;
   vector<int>v(n);
   for(int i = 0;i<n;i++) cin >> v[i];
    int m; cin >> m;
    while(m--){
        map<char,long long> mp;
        map<long long,char> mp1; 
        int ok = 1;
        string s; cin >> s;
        if(n != s.size()) ok = 0;
        for(int i = 0; i < n; i++) {
            if(mp.count(s[i]) == 0) mp[s[i]] = v[i];
            else {
                if(mp[s[i]] != v[i]) {
                    ok = 0;
                    break;
                }
            }
            if(mp1.count(v[i]) == 0)     mp1[v[i]] = s[i];
            else {
                if(mp1[v[i]] != s[i]) {
                    ok = 0;
                    break;
                }
            }
        }
        if(ok) cout << "YES\n";
        else cout <<"NO\n";
    } 
}

int main() {
    long long t; cin >> t;
    while (t--) 
        naf();
}
