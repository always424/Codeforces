#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, a, count1 = 0, extra0 = 0, extra0max = -1;
    cin >> n;
    
    while (n--) {
        cin >> a;
        if (a == 1) {
            count1++;
            if (extra0 > 0) extra0--;
        } 
        else {
            extra0++;
            extra0max = max(extra0max, extra0);
        }
    }
    
    cout << count1 + extra0max << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    return 0;
}
