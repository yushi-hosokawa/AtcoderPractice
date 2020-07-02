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
    int len =s.size();
    ll ans =0;
    rep(i,len){
        ll under =i;
        ll top =len-i-1;
        if(s[i]=='U'){
            ans+=under*2;
            ans+=top;
        }
        else{
            ans+=under;
            ans+=top*2;
        }

    }
    cout<<ans<<endl;
}