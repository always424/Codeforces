#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll n,k;
vector<ll>v;

ll minop(ll mid){
    ll sum = 0;
    for(int i = n / 2 ; i<n;i++){
        if(v[i] < mid) sum+= mid-v[i];
    }
    return sum;
}
int isok(ll mid) {
    if(minop(mid) > k) return 1;
    else return 0;
}

void always424() {
    cin >> n >> k;
        for(int i = 0;i<n;i++){
            ll x; cin >> x;
            v.push_back(x);
        }

    sort(v.begin(),v.end());
    ll l = 0,r = 1e9+1+k;

    while(l < r){
        ll mid = (l+r) /2;
        if(isok(mid) == 0) l = mid +1;
        else r= mid;
    }
    cout << l-1 <<"\n";
}

int main() {
    init_code();
    always424();
}
