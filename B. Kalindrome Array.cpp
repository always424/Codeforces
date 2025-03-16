#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0;i<n;i++) cin >> v[i];

    int ok = 1,a=0,b=0;
    for(int i = 0;i<n;i++){
        if(v[i] != v[n-i-1]){
            ok = 0;
            a = v[i];
            b = v[n-1-i];
            break;
        }
    }
    if(ok) cout <<"YES\n";
    else{
        vector<int>ve,ve1;
        int ok1 = 1,ok2 = 1;
        for(int i = 0;i<n;i++){
            if(v[i] != a) ve.push_back(v[i]);
        }
        for(int i = 0;i<n;i++){
            if(v[i] != b) ve1.push_back(v[i]);
        }

        for(int i = 0;i<ve.size();i++){
            if(ve[i] != ve[ve.size()-i-1]){
                ok1 = 0;
                break;
            }
        }
        for(int i = 0;i<ve1.size();i++){
            if(ve1[i] != ve1[ve1.size()-i-1]){
                ok2 = 0;
                break;
            }
        }
        if(ok1 || ok2) cout <<"YES\n";
        else cout << "NO\n";
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) solve();
    
    return 0;
}
