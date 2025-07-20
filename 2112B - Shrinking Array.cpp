#include <bits/stdc++.h>
using namespace std;

void naf() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;i++) cin >> v[i];
    for(int i = 0; i < n - 1;i++) {
        if(abs(v[i] - v[i+1])<= 1) {
            cout << "0\n";
            return;
        }
    }
    for(int i = 1;i<n-1;i++){
        if(v[i-1] < v[i] && v[i] > v[i+1]){
            cout << "1\n";
            return;
        }
        if(v[i-1] > v[i] && v[i] < v[i+1]){
            cout <<"1\n";
            return;
        }
    }

    cout <<"-1\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) naf();
}
