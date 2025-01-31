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
    ll x,y,a,b; cin >> x >> y >> a >> b;
    ll mn = min(x,y);
    ll ans = 0;
    ans += mn*b;
    ll rem = abs(x-y);
    ans+= rem*a;
    ll ans1 = (x*a) + (y*a);
    cout << min(ans,ans1) << "\n";
}

int main() {
    init_code();
    int t; cin >> t;
    while(t--)
    always424();
}
