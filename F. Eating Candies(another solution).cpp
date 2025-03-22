#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float fl;
typedef double dl;
int mod = 1e9+7;


void solve() {
      int n; cin >> n;
      vector<int>v(n);
      for(int i = 0;i<n;i++) cin >> v[i];
      ll l = 0,r = n-1;
      ll sum1= 0,sum2= 0,mx=0;
      // map<int,int>mp;
      sum1 +=v[l];
      sum2 +=v[r];
      while(l<r){
           if(sum1 > sum2){
                  r--;
                  sum2+=v[r];
           }
           else if(sum1 < sum2){
                  l++;
                  sum1+=v[l];
           }
           else{
                  mx = max(mx,(l+1)+(n-r));
                  l++;
                  sum1+=v[l];
           }
      }
      cout << mx<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) 
    solve();
    
    return 0;
}
