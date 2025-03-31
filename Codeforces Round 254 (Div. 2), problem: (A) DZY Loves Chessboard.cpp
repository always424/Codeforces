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
    int n, m; 
    cin >> n >> m;
    char a[n][m];
    fr(n) frj(m) cin >> a[i][j];
    fr(n) {
        frj(m) {
            if (a[i][j] == '.')     a[i][j] = (i + j) % 2 == 0 ? 'B' : 'W';
        }
    }
    fr(n) {
        frj(m) cout << a[i][j];
        cout << _;  
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // int t; cin >> t;
    // while(t--)
    solve();

    return 0;
}
