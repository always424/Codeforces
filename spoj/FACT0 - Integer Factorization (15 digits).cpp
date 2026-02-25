#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = (ll) 1e8;
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

bitset<N+2>p;
vector<ll>prime;
void always424(ll n){
    map<ll,ll>mp;
    for(int i =0;i<prime.size() && (ll)prime[i]*prime[i] <=n;i++){
        if(n%prime[i] == 0){
            int cnt=0;
            while(n%prime[i] ==0){
                n/=prime[i];
                cnt++;
            }
            mp[prime[i]] =cnt;
        }
    }
    if(n>1) mp[n] = 1;
    for(auto u : mp) cout<<u.first<<"^"<<u.second<<" ";
    cout<<"\n";
    // bug(mp);
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    for(int i =3;i<=N;i+=2) p[i] =1;
    p[2]=1;
    for(int i =3;i*i<=N;i++){
        if(p[i] ==1){
            for(int j=i*i;j<=N;j+=2*i) p[j] =0;
        }
    }
    for(int i =1;i<=N;i++) if(p[i] ==1) prime.push_back(i);

    // cin>>t;
    ll n;
    while (cin>>n) {
        if(n==0) return 0;
        always424(n);
    }
}
