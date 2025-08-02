#include<bits/stdc++.h>
using namespace std;
int const mx = 1e6;
bitset<mx>isprime;
void naf(){
    int n; cin >> n;
    for(int i = 3; i <= n+5; i += 2)    isprime[i] = 1;
    
    isprime[2] = 1;
    int sq = sqrt(n+1)+2;
    for(int i = 3;i<=sq;i+=2){
        if(isprime[i] == 0)  continue;
        for(int j = i*i;j<=n+1;j+=2*i) isprime[j] = 0;
    }
    if(n == 1 || n == 2) cout << 1<<"\n";
    else cout << 2 <<"\n";
    for(int i = 2;i<=n+1;i++) {
        if(isprime[i] == 1) cout <<1 <<" ";
        else cout << 2<<" ";
    }
    
}

int main(){
    // int t; cin >> t;
    // while(t--)
        naf();
}
