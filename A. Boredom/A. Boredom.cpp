#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],sum[100005],dp[100005],mx;
long long goriberdp(int x){
    if(x > mx) return 0;
    if(dp[x]!=-1) return dp[x];
    long long ans = 0;
    ans =max(ans,goriberdp(x+1));
    ans = max(ans,sum[x]+goriberdp(x+2));

    return dp[x]=ans;
}
int main() {
    cin >>n;
    memset(dp,-1,sizeof dp);
    for(int i =0;i<n;i++){
        cin >> a[i];
        sum[a[i]]+=a[i];
    }
    sort(a,a+n);
    mx = a[n-1];
    long long res= goriberdp(a[0]);
    cout << res;

}
