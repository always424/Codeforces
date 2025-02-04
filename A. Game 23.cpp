#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void always424() {
    ll n,m; cin >> n >> m;
    int c = 0;
    if (m % n == 0) {
        n = m / n;
        while (n != 1) {
            if (n % 3 == 0) {
                n /= 3;
                c++;
            }
            else if (n % 2 == 0) {
                n /= 2;
                c++;
            }
            else break;
        }
        if (n != 1) cout <<"-1";
        else cout << c;
    }
    else cout << "-1";
}

int main() {
    init_code();
    // int t; cin >> t;
    // t= 0;
    // while(t--)
    always424();
}
