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
    string s; cin >> s;
    int z = 0;

    fr(n) {
        if(s[i] == '0') z++;
    }

    if(z == 1) {
        cout << "BOB\n";
        return;
    }
    if(z % 2 == 1) {
        cout << "ALICE\n";
        return;
    }
    cout << "BOB\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    while (t--) 
        solve();

    return 0;
}
