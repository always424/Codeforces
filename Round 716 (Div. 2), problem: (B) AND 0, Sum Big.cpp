//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
    cerr << arg << ' ';
    faltu(rest...);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef long long ll;
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
# define vb vector <bool>
# define vc vector <char>
# define vs vector <string>
# define vvd vector < vector < double > >
# define vvld vector < vector < long double > >
# define pld pair < long double , long double >
# define pDD pair < double , double >
# define vpld vector < pld >
# define vpDD vector < pDD >
# define vvpii vector < vector < pii > >
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define srt(m) sort(m.begin(),m.end())
#define srtr(m) sort(m.rbegin(),m.rend())
#define rev(m) reverse(m.begin(),m.end())
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fr(m) for(int i = 0; i < m; i++)
#define fro(m) for(int i=1; i<m; i++)
#define _ "\n"
#define nll cout << "\n";

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <chrono>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll pow(ll a , ll b , ll m) {
    ll ans = 1 ;
    while(b) {
        if (b&1) {
            ans = (ans*a) % m ;
        }
        b /= 2 ;
        a = (a*a) % m ;
    }
    return ans ;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool isprime(ll n) {
    for (ll i = 2 ; i * i <= n ; ++i)
        if (n % i == 0) {
            return false ;
        }
    return true;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll gcd(ll a, ll b) {
    if (b == 0) {
        return a ;
    }
    else {
        return gcd (b , a % b) ;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll lcm(ll a, ll b) {
    return ((a / gcd(a , b)) * b) ;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Start ----
void always424() {
    ll n,k; cin >> n >> k;
    ll ans = 1;
    fr(k) ans = (ans*n)%MOD;

    cout << ans;
    nll
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    optimize();
    auto start = chrono::high_resolution_clock::now();

    ll t; cin >> t;
    while(t--)
        always424();

    auto end = chrono::high_resolution_clock::now();
    cerr << "Time taken: " << chrono::duration<double>(end - start).count() << " seconds\n";

    return 0;
}

