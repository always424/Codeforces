/*
   *****In The Name Of ALLAH*****
        author: Nafis Abdullah
        always424.
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void always424() {
    ll n; cin >> n;
    string s; cin >> s;
    int ok = 1;
    ll ind = -1;
    for(int i = 0;i<n/2;i++){
        if(s[i] != s[n-1-i]){
            if(ind != -1 && i - ind > 1){
                cout << "NO\n";
                ok = 0;
                break;
            }
                    ind = i;

        }
    }
    if(ok) cout << "YES\n";
}
int main() {
    init_code();
    int t; cin >> t;
    while(t--)
    always424();
}


