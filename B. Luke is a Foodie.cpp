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
    ll n,x; cin >> n >> x;
    vector<ll>v(n);
    for(int i = 0;i<n;i++)  cin >> v[i];
    ll mn = v[0];
    ll mx = v[0];
    int c =0;
    for(int i = 1;i<n;i++){
        if(v[i] > mx) mx = v[i];
        if(v[i] < mn) mn = v[i];

        if(mx-mn > 2 * x){
            c++;
            mn = mx = v[i];
        }
    }
    cout << c << "\n";
}
int main() {
    init_code();
    int t; cin >> t;
    while(t--)
    always424();
}


