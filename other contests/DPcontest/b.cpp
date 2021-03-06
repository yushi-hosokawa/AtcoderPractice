#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;


int main(){
    int n,k;
    cin >>n>>k;
    vector <ll> h(100010);
    vector <ll> dp(100010);

    rep(i,n) cin >> h.at(i) ;
    rep(i,100010) dp.at(i) =INF;
    ll x;
    dp[0] = 0;

    for (int i = 1; i<n;++i){
        for(int j = 1;j<=k;j++){
            if(i-j < 0){
                break;
            }
            chmin(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
            x = dp[i];
        }
    }

    cout<<dp[n-1]<<endl;

}
