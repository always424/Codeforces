#include <bits/stdc++.h>
using namespace std;

void naf() {
    int n; cin >> n;
    vector<int>v(n+3);
    for(int i = 1;i<=n;i++) cin >> v[i];
    long long ans = 1e18,c =1;
    for(int i = 1;i<=n;i++){
        if(i == n+1 || v[i] != v[i+1]){
            ans = min(ans,v[i] * (n-c));
            c = 1;
        }
        else c++;
    }

    cout << ans<<"\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) naf();
}
