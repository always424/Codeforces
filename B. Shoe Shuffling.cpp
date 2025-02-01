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
    ll n; cin >> n;
    vector<ll>v(n);
    for(int i = 0;i<n;i++)  cin >> v[i];
    map<ll,ll>freq,last;
    for(auto u : v) freq[u]++;

    int ok = 1;

    for(auto u : freq){
        if(u.second == 1){
            cout << "-1\n";
            ok = 0;
            break;
        }
    }
    if(ok){
        // cout << "HERE\n";
        vector<int> ans(n);
        for(int i=0;i<n;i++)ans[i] = i+1;
        for (int i = 0; i < n-1; ++i)
        {   
            if(v[i]==v[i+1]) swap(ans[i],ans[i+1]);
        }
        for(auto u : ans) cout << u <<" ";
        cout << "\n";

    }
}
int main() {
    init_code();
    int t; cin >> t;
    while(t--)
    always424();
}


