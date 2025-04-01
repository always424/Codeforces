#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(m) for(int i = 0; i < m; i++)
#define _ "\n"
#define ff first
#define ss second

void solve() {
   int n; cin >> n;
   vector<ll>v(n);
   fr(n) cin >> v[i];
   int mx = 0;
   sort(v.begin(),v.end());
   for(int t = 2 ; t<= 2 * v[n-1] ;t++){
        int l = 0,r=n-1;
        int c = 0;
        while(l < r){
            ll sum = v[l]+v[r];
            if(sum ==t )  c++,l++,r--;
            else if(sum > t ) r--;
            else l++;  
        }
        mx = max(mx,c);
   }
   cout << mx <<_;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    while (t--) solve();

    return 0;
}
