#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    string s;
    getline(cin,s);
    s+=' ';
    int n;cin>>n;
    vector<string> t(n);

    rep(i,s.size()){
        string x;
        if(s[i]!=' '){
            x+=s[i];
        }
        else {
            bool flag =false;
            rep(j,n){
                rep(k,t[j].size()){
                    if(t[j][k]!=x[k] ||t[j][k]!='*'){
                        continue;
                    }
                    if(k==t[j].size()-1){
                        flag==true;
                    }

                }
            }
            x="";
        }

    }
}