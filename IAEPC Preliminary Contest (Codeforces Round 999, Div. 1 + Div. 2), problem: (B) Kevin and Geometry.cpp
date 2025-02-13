#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int>v(n),v1,ans;
    for(int i = 0;i<n;i++) cin >> v[i];
    map<int,int>mp;
    int c =0;
    int flag = 0;
    for(auto u: v){
        mp[u]++;
        if(mp[u] == 2 && !flag){
            c = u;
            flag = 1;
            // break;
        }
        else v1.push_back(u);
    }
    if(c == 0){
        cout <<"-1\n";
        return;
    }
    // set<int>st;
    int f =0;
    for(auto u : v1){
        if(u == c && f == 0){
            f=1;
        }
        else ans.push_back(u);
    }
    sort(ans.begin(),ans.end());
    for(int i = 1;i<ans.size();i++){
        if(abs(ans[i]-ans[i-1]) < 2 * c){
            cout << c << " "<< c <<" " <<ans[i] <<" "<<ans[i-1] <<"\n";
            return;
        }
    }
    cout <<"-1\n";
    // for(auto u: ans) cout << u <<" ";
    // cout <<"\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    solve();
}
