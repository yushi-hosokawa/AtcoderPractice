#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    string s;cin>>s;
    string t="";
    for(int i =0;i<s.size();++i){
        if('0'<=s[i]&&s[i]<='9')
            t+=s[i];

    }
    int c =stoi(t);
    cout<<c<<endl;

}