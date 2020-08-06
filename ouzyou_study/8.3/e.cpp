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
    int a,b,c;cin>>a>>b>>c;
    vector<ll> dp(310,INF);
    dp[0]= 0;
    for(int i =1;i<=300;i++){
        if(i==a||i==b||i==c)continue;
        if(i-1!=a&&i-1!=b&&i-1!=c)chmin(dp[i],dp[i-1]+1);
        if(i-2!=a&&i-2!=b&&i-2!=c&&i>1)chmin(dp[i],dp[i-2]+1);
        if(i-3!=a&&i-3!=b&&i-3!=c&&i>2)chmin(dp[i],dp[i-3]+1);
    }
    //cout<<dp[5]<<endl;
    if(dp[n]<=100)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}