#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float fl;
typedef double dl;
#define fr(m) for(int i=0; i<m; i++)
#define frj(m) for(int j=0; j<m; j++)
#define frr(n) for(int i=n; i>=0; i--)
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define _ "\n"
int mod = 1e9+7;

void solve() {
  int n; cin >> n;
  string s,v,v1; cin >> s;
  int f = 0;
  fr(n){
    if(!f){
        if(s[i] == '0'){
            v+='0';
            v1+='0';
        }
        else if(s[i] == '1'){
            v+='1';
            v1+='0';
            f=1;
        }
        else {
            v+='1';
            v1+='1';
        }
    }
    else{
        v+='0';
        v1+=s[i];
    }
  }
  cout << v <<_;
  cout << v1 <<_;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
        int t; cin >> t;
        while(t--)
          solve();
    
    return 0;
}
