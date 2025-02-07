#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void always424() {
    string s; cin >> s;
    sort(s.begin(),s.end());
    if(s == "ahlo") cout << "SI\n";
    else cout <<"NO\n";
}

int main() {
    init_code();
    int t; 
    cin >> t;
    while (t--)
        always424();
}
