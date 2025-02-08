#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void always424() {
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = 0;
        ans=a;
        ans+=b/3;
        b=b % 3;
        if(c+b<3 && b>0){
            cout<<-1<<endl;
            return;
        }
        else c+=b;
        ans+=c/3;
        c=c%3;
        if(c>0) ans++;
        cout<<ans<<endl;

}

int main() {
    init_code();
    int t; 
    cin >> t;
    while (t--)
        always424();
}
