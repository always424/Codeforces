    #include<bits/stdc++.h>
    using namespace std;
    int n, m, b, mod,a[505],dp[505][505];
    int main() {
        cin >> n >> m >> b >> mod;
        dp[0][0] = 1;
        for(int i =0;i<n;i++){
            cin >> a[i];
            for(int j =0;j<m;j++){
                for(int bug =0;bug+a[i]<=b;bug++) dp[j+1][bug+a[i]] = (dp[j+1][bug+a[i]] +dp[j][bug]) % mod;
            }
        }
        long long ans = 0;
        for(int i =0;i<=b;i++)    ans= (ans+dp[m][i])%mod;
        cout << ans;
    }
