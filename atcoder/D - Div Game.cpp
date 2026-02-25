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

bitset<N+10>p;
vector<int>prime;
void always424(){
    ll n; cin>>n;
    ll op =0;
    for(int i =0;(ll)prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            ll cnt=0,check=1;
            while(n%prime[i]==0) {
                n/=prime[i];
                cnt++;
                if(cnt == check){
                    check=cnt+1;
                    cnt=0;
                    op++;
                }
            }
            // cout<<prime[i]<<" " <<cnt<<"\n";
        }
    }
    if(n!=1) op++;
    cout<<op;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;

    for(int i =3;i<=N;i+=2) p[i] =1;
    p[2]=1;
    for(ll i =3;i*i<=N;i++){
        if(p[i] ==1){
            for(ll j =i*i;j<=N;j+=i*2) p[j] =0;
        }
    }
    for(int i =1;i<=N;i++) if(p[i] ==1) prime.push_back(i);

    // cin>>t;
    int n;
    while (t--) {
        always424();
    }
}
