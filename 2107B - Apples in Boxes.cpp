#include <bits/stdc++.h>
using namespace std;

void naf() {
    int n,k; cin >> n >> k;
    vector<int>v(n);
    for(int i =0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    long long sum = accumulate(v.begin(),v.end(),0ll);
    v[n-1]--;
    sort(v.begin(),v.end());

    if(sum % 2 ==0 || v[n-1] - v[0] > k) cout <<"Jerry\n";
    else cout <<"Tom\n";
}


int main() {
    int t;
    cin >> t;
    while(t--) naf();
}
