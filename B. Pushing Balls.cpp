#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float fl;
typedef double dl;
int mod = 1e9+7;


void solve() {
    int n,m; cin >> n >> m;
    char a[n+1][m+1];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++) cin >> a[i][j];
    }

    int ok = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++) {
            if(a[i][j] == '1'){
                int c = 0, c1=0;
                for(int l = 0;l<i;l++){
                    c++;
                    if(a[l][j] == '1') c1++;
                }
            if(c!=c1){
                int c = 0, c1=0;
                for(int l = 0;l <j;l++){
                    c++;
                    if(a[i][l] == '1') c1++;
                }
                if(c != c1){
                    cout <<"NO\n";
                    return;
                }
            }
            }
        }
    }

    cout <<"YES\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
    solve();

    // cout <<"\n";
    }
    
    return 0;
}
