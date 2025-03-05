#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    int neg = 0;
    ll sum = 0;

    for(int i = 0;i<n;i++){
        cin >> v[i];
        if(v[i] < 0){
            neg++;
            v[i] = -(v[i]);
        }
        sum+=v[i];
    }

    if(neg % 2 == 1) {
        sort(v.begin(),v.end());
        sum-=v[0]*2;
    }

    cout << sum <<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    solve();
    return 0;
}
