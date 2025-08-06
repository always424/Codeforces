#include<bits/stdc++.h>
using namespace std;

void naf(){
   string s; cin >> s;
    int n = s.size();
    for(int i =0;i<n-1;i++){
        if(s[i] == 'A' && s[i+1] == 'B'){
            for(int j = i+2;j<n-1;j++){
                if(s[j]=='B' && s[j+1] =='A'){
                    cout <<"YES\n";
                    return;
                }
            }
            

        }
    }
    for(int i =0;i<n-1;i++){
        if(s[i] == 'B' && s[i+1] == 'A'){
            for(int j = i+2;j<n-1;j++){
                if(s[j]=='A' && s[j+1] =='B'){
                    cout <<"YES\n";
                    return;
                }
            }
        }
    }
    cout <<"NO\n";
}
int main() {
//    int t; cin >> t;
//    while(t--)
        naf();

}
