#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = (ll) (1e4)*5;
// const int N = 1000005; 
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;
template<typename F, typename S> ostream& operator<<(ostream& os, const pair<F, S>& p) { return os << "(" << p.first << ", " << p.second << ")"; }
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) { os << "{"; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << *it; } return os << "}"; }
template<typename T> ostream& operator<<(ostream& os, const set<T>& v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << *it; } return os << "]"; }
template<typename T> ostream& operator<<(ostream& os, const multiset<T>& v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << *it; } return os << "]"; }
template<typename F, typename S> ostream& operator<<(ostream& os, const map<F, S>& v) { os << "["; for (auto it = v.begin(); it != v.end(); ++it) { if (it != v.begin()) os << ", "; os << it->first << " = " << it->second; } return os << "]"; }
 
#define dbg(args...) do { cerr << #args << " : "; bug(args); } while(0)
void bug() { cerr << endl; }
template<typename T> void bug(T a[], int n) { for (int i = 0; i < n; ++i) cerr << a[i] << ' '; cerr << endl; }
template<typename T, typename ...hello> void bug(T arg, const hello&... rest) { cerr << arg << ' '; bug(rest...); }
ll a,b,x;
int isok(ll n){
    ll nn=n;
    int cnt=0;
    while(nn!=0){
        cnt++;
        nn/=10;
    }
    ll res=(a*n)+(b*cnt);
    return res>x;
}
void always424(){
    cin>>a>>b>>x;
    ll lo=0,hi=1000000001;
    while(lo<hi){
        ll mid=(lo+hi)/2;
        if(isok(mid)) hi=mid;
        else lo=mid+1;
    }
    cout<<lo-1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    // cin>>t;
    while (t--) {
        always424();
    }
}
