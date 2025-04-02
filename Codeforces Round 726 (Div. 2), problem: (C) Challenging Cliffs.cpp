#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fr(m) for(int i = 0; i < m; i++)
#define fro(m) for(int i=1; i<m; i++)
#define _ "\n"
#define nll cout<<'\n'
#define ff first
#define ss second
#define inff (1<<30)
#define srt(m) sort(m.begin(),m.end())
#define srtr(m) sort(m.rbegin(),m.rend())
#define rev(m) reverse(m.begin(),m.end())

void solve() {
   int n; cin >> n;
   vector<ll>v(n);
    fr(n) cin >> v[i];
    srt(v);
    ll mn = inff,ind = 0;
    if(n == 2){
        cout << v[0]<<" " << v[1] <<_;
        return;
    } 
    fro(n)  if(v[i] - v[i-1] < mn){
            mn = v[i]-v[i-1];
            ind = i;
        }

    for(int i = ind;i<n;i++) cout << v[i] <<" ";
    for(int i = 0;i<ind;i++) cout << v[i]<<' ';

    nll    ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    while (t--) solve();

    return 0;
}
