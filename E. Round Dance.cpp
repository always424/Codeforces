#include<bits/stdc++.h>
using namespace std;
int const mx =200005;
int const mod = 1000000007;
vector<int>adj[mx];
int vis[mx];
int cyc;
void dfs(int u,int parr){
    vis[u] = 1;
    for(auto v: adj[u]){
        if(v == parr) continue;

        if(vis[v] == 0) dfs(v,u);
        else if(vis[v] == 1)  cyc = 1;
    }

    vis[u] = 2;
}
void naf(){
    int n; cin >> n;
    for(int i = 0;i<=n;i++) {
        adj[i].clear();
        vis[i] = 0;
    }
    
    for(int u =1;u<=n;u++){
        int v; cin >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int mn =0,mx =0;
    for(int i = 1;i<=n;i++){
        if(!vis[i]){
            mx++;
            cyc = 0;
            dfs(i,-1);
        
            if(cyc) mn++;
        }
    }

    if(mn < mx) mn++;

    cout << mn <<" " << mx<<"\n";
}

int main(){
    int t; cin >> t;
    while(t--)
        naf();
}
