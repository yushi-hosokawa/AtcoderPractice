#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;


int main(){
    int n;
    ll x;
    cin >>n;
    vector <ll> h(100010);
    vector <ll> dp(100010);
    rep(i,n){
        cin>>h[i];
    }
    for (int i = 0; i < 100010; ++i) dp[i] = INF;
    dp[0] = 0;
    for (int i =1;i<n;i++){
        chmin(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
        if(i>1)chmin(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
        x = dp[i];

    }
    cout<<dp[n-1]<<endl;

}
