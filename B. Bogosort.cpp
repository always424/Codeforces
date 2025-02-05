#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void always424() {
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0;i<n;i++) cin >> v[i];
    sort(v.rbegin(),v.rend());
    for(auto u: v) cout << u <<" ";
    cout << "\n";
}

int main() {
    init_code();
    int t; cin >> t;
    // t= 0;
    while(t--)
    always424();
}
