#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <chrono>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
typedef long long ll;
#define pii pair<ll,ll>
const int N = 100005; 
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;
const ll dx[]={-1,1,0,0};
const ll dy[]={0,0,1,-1};
const char dn[] ={'U','D','R','L'};
template<typename F, typename S> ostream& operator<<(ostream& os, const pair<F, S>& p) { return os << "(" << p.first << ", " << p.second << ")"; }
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) { os << "{"; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << *it; } return os << "}"; }
template<typename T> ostream& operator<<(ostream& os, const set<T>& v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << *it; } return os << "]"; }
template<typename T> ostream& operator<<(ostream& os, const multiset<T>& v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << *it; } return os << "]"; }
template<typename F, typename S> ostream& operator<<(ostream& os, const map<F, S>& v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << it->first << " = " << it->second; } return os << "]"; }
#define dbg(args...) do { cerr << #args << " : "; bug(args); } while(0)
void bug() { cerr << endl; }
template<typename T> void bug(T a[], int n) { for (int i = 0; i < n; ++i) cerr << a[i] << ' '; cerr << endl; }
template<typename T, typename ...hello> void bug(T arg, const hello&... rest) { cerr << arg << ' '; bug(rest...); }
ll lcm(ll a, ll b) {
    return ((a / __gcd(a , b)) * b) ;
}
//+
void solve(){
    int n,m,k; cin>>n>>m>>k;
    int r=0,r1=0,r2=0;
    for(int z =0;z<n/4;z++){
        vector<string>s;
        for(int i =0;i<4;i++){
            for(int j=0;j<m;j++){
                string a; cin>>a;
                reverse(a.begin(),a.end());
                if(j==m-1) s.push_back(a);
            }
        }
        int ans1=1,ans2=1,ans3=1;
        for (int i = 0;i<4;i++) {
            if (s[i].size()<k) {
                ans1 = 0;
                ans2 = 0; 
                ans3 = 0;
            }
        }
        if (ans1) { 
            for (int i = 0; i < k; i++) {
                if (!(s[0][i] ==s[1][i] &&s[2][i]==s[3][i])) ans1 = 0;
                if (!(s[0][i]==s[2][i] && s[1][i]== s[3][i])) ans2 = 0;
                if (!(s[0][i] ==s[3][i] && s[2][i]== s[1][i]))ans3 = 0;
            }
        }
        r+=ans1;
        r1+=ans2;
        r2+=ans3;
    }
    cout<<r<<' '<<r1<<' '<<r2;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    auto start = chrono::high_resolution_clock::now();
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int tc = 1 ; 
    // cin >> tc ;
    for (int i = 0; i < tc; i++){
        // cout << "Case " << i+1 << ":\n" ;
        solve() ;
    }

    auto end = chrono::high_resolution_clock::now();
    cerr << "Time taken: " << chrono::duration<double>(end - start).count() << " seconds\n";
}
