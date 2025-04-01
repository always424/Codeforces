#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(m) for(int i = 0; i < m; i++)
#define frj(m) for(int j = 0; j < m; j++)
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define _ "\n"

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    fr(n) cin >> v[i];
    fr((1 << n)){
        ll sum = 0;
        frj(n){
    if(i & (1 << j)) sum += v[j];
            else sum-=v[j];
        }
        if(sum % 360 == 0){
            cout <<"YES\n";
            return;
        }
    }
    cout <<"NO\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    solve();

    return 0;
}
