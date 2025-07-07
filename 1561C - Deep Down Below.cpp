#include <bits/stdc++.h>
using namespace std;

void naf() {
    int n; cin >> n;
    vector<pair<int,int>>v(n);

    for(int i = 0;i<n;i++){
        vector<int>m;
        int sz; cin >> sz;

        for(int j = 0;j<sz;j++){
            int x; cin >> x;
            m.push_back(x-j+1);
        }
        int mx = *max_element(m.begin(),m.end());

        v[i] = {mx,sz};
    }

    sort(v.begin(),v.end());

    int ans = v[0].first , remain = v[0].second;

    for(int i = 1;i<n;i++){
        ans = max(ans, v[i].first - remain);
        remain+=v[i].second;
    }

    cout << ans <<"\n";

    
}

int main() {
    int t;
    cin >> t;
    while (t--)
        naf();
}


 
