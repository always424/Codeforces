#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, y = 0;

    for(int i = 0;i<n;i++){
        if(s[i] == 'L') x--;
        else if(s[i] == 'R') x++;
        else if(s[i] == 'U') y++;
        else y--;

        if(x == 1 && y == 1 ){
            cout << "YES\n";
            return;
        } 
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    solve();
    return 0;
}
