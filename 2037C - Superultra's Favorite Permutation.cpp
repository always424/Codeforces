#include <bits/stdc++.h>
using namespace std;
vector<int>pri(1000009,1);
void is_prime(){
    pri[0] = 0,pri[1] = 0;

    for(int i = 2;i*i<=1000000;i++){
        if(pri[i]){
            for(int j = i*i; j <=1000000;j+=i){
                pri[j] = 0;
            }
        }
    }
}
void naf() {
    int n; cin >> n;
    if(n <= 4){
        cout << -1<<"\n";
        return;
    }
    for(int i = 2;i<=n;i+=2) cout << i <<" ";
    int even_last = n,odd_first;
    
    if(n & 1) even_last--;

    for(int i = 1;i<=n;i+=2){
        if(!pri[even_last+i]){
            odd_first = i;
            break;
        }
    }

    cout << odd_first<<" ";

    for(int i = 1;i<=n;i+=2){
        if(i != odd_first) cout << i<<" ";
    }

    cout <<"\n";

}

int main() {
    is_prime();
    long long t; cin >> t;
    while (t--) 
        naf();
}
