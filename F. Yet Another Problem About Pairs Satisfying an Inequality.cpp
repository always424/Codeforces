/*
*   author: Nafis Abdullah
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, a, b) for (int i = a; i < b; i++)
 
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void always424(){  
    ll n; cin >> n;
    vector<ll>val,ind;
    for(ll i =1;i<=n;i++) {
        ll x; cin >> x;
        if(i > x){
            val.push_back(x);
            ind.push_back(i);
        }

    }
    ll c = 0;
    for(ll i = 0;i<val.size();i++){
        c+=lower_bound(ind.begin(),ind.end(),val[i]) -ind.begin();
    }
    cout << c <<'\n';
}

int main() {
    init_code();
    int t; cin >> t;
    while(t--)
    always424();
}
