#include <bits/stdc++.h>
using namespace std;



void naf() {
    int n; cin >> n;
    if(n % 2 ==0) cout << n /2<<" "<< n/2 <<"\n";
    else {
        if(n%20 == 19){
            vector<int>ans,ans1;
            string s = to_string(n);
            int x=0,y=0;
            for(int i = 0;i<s.size();i++){
                int num = s[i] -'0';
                int num1 = num/2;
                int num2 = num-num1;

                // cout << num<<" "<< num1<<" " <<" "<< num2<<"\n";

                if(x <= y){
                    ans.push_back(num2);
                    x+=num2;
                    ans1.push_back(num1);
                    y+=num1;
                }
                else{
                    ans1.push_back(num2);
                    y+=num2;
                    ans.push_back(num1);
                    x+=num1;
                }

            }
        
            reverse(ans.begin(),ans.end());
            while(ans.back() == 0) ans.pop_back();
            
                        reverse(ans.begin(),ans.end());

            for(auto u : ans) cout << u;
                cout <<" ";
            reverse(ans1.begin(),ans1.end());
            while(ans1.back() == 0) ans1.pop_back();
                        reverse(ans1.begin(),ans1.end());

            for(auto u : ans1) cout << u;
                cout <<"\n";


            cout <<"\n";
        }
        else cout << n/2<<" " << n - n/2<<"\n";
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) naf();
}
