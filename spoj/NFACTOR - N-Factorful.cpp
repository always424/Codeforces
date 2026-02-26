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
bitset<N+2>p;
vector<int>pr,fac[1000006];
int prf[12][1000006];
void always424(){
    int a,b,n; cin>>a>>b>>n;
    if(n>10){
        cout<<"0\n";
    }else{
        cout<<prf[n][b]-prf[n][a-1]<<"\n";
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    for(int i =3;i<=N;i+=2) p[i]=1;
    p[2]=1;
    for(int i =3;i*i<=N;i++){
        if(p[i] ==1){
            for(int j=i*i;j<=N;j+=i*2) p[j]=0;
        }
    }
    for(int i =1;i<=N;i++) if(p[i] ==1) pr.push_back(i);
    for(int n = 1;n<=1000000;n++){
        int temp = n;
        for(int i =0;i<pr.size() && pr[i]*pr[i]<=temp;i++){
            if(temp%pr[i]==0){
                while(temp%pr[i]==0){
                    temp/=pr[i];
                }
                fac[n].push_back(pr[i]);
            }
        }
        if(temp >1) fac[n].push_back(temp);
    }
    for(int i =0;i<=10;i++){
        for(int j =1;j<=1000000;j++){
            prf[i][j] = prf[i][j-1]+(fac[j].size()==i?1:0);
        }
    }
    cin>>t;
    while (t--) {
        always424();
    }
}
