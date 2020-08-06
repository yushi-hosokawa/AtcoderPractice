#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    int n;cin>>n;
    vector<char> c(n);
    rep(i,n)cin>>c[i];
    int cw = 0;int cr=0;
    int ans =0;
    rep(i,n){
        if(c[i]=='W')cw++;
        else cr++;
    }

    rep(i,cr){
        if(c[i]=='W')ans++;
    }
    cout<<ans<<endl;

}