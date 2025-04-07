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
   vector<int>v(n);
   fr(n) cin >> v[i];
   srtr(v);
   ll sum = 0, sum1 = 0;
   fr(n){
        if(v[i] % 2 == 0 && i % 2 == 0) sum+=v[i];
        if(v[i] & 1 && i & 1) sum1+=v[i];
   }
   if(sum > sum1) cout << "Alice";
   else if(sum < sum1) cout << "Bob";
   else cout <<"Tie";
   nll;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) 
        solve();

    return 0;
}
