#include <bits/stdc++.h>
using namespace std;

#define N 200005
int n,m;
vector<int>adj[N];
int vis[N],col[N];

void dfs(int u,int c){
    if(vis[u] == 1) return;

    vis[u] = 1;
    col[u] = c;
    for(auto v : adj[u]){
        dfs(v,3-c);
    }

}

int main() {
    cin >> n;
    for(int i = 0;i<n-1;i++)   {
        int u,v; 
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,1);
    long long f = 0, s =0;
    for(int i =1;i<=n;i++) {
        if(col[i] == 1) f++;
        else s++;
    }

    long long ans =1LL* f*s-(n-1);
    cout << ans;

    return 0;
}
