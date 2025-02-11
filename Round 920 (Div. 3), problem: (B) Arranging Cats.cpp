#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s,s1; cin >> s>>s1;
        int c= 0,c1=0;
        for(int i = 0;i<n;i++){
            if(s[i] == '0' && s1[i] == '1') c++;
            if(s[i] == '1' && s1[i] == '0') c1++;
        }
        cout << max(c,c1) <<"\n";
    }
}
