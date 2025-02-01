/*
   *****In The Name Of ALLAH*****
        author: Nafis Abdullah
        always424.
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void always424() {
    int n, m; cin >> n >> m;
    vector<pair<string , string >> v(m);
    for(int i = 0;i<m;i++){
        string s,s1; cin >> s >> s1;
        string one = min(s,s1) , two = max(s,s1);
        if(s.size() > s1.size()) 
        {
            one = s1; 
            two = s;
        }
        else{
            one = s; two = s1;
        } 
        v[i] = {one,two};
    }
    // for(int i = 0;i<m;i++) cout << v[i].first << " ";
    while(n--){
        string k; cin >> k;
        for(auto u : v) if(k == u.first || k == u.second) cout << u.first << " ";
    }
            cout << "\n";

}
int main() {
    init_code();
    // int t; cin >> t;
    // while(t--)
    always424();
}


