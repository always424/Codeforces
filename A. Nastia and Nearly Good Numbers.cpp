#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void always424() {
    int a,b; cin >> a >> b;
    if(b == 1) cout <<"NO\n";
    else cout <<"YES\n" <<  a <<" " << (ll) a * b <<" " <<  (ll) a * (b+1) <<"\n";
    
}

int main() {
    init_code();
    int t; cin >> t;
    // t= 0;
    while(t--)
    always424();
}
