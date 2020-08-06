#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

//カエルの問題1
// https://atcoder.jp/contests/dp/tasks/dp_a

int main(){
    int n;cin>>n;
    vector<int> h(n);rep(i,n)cin>>h[i];

    //dpのvector作成及び値を代入(最大化なら0,最小化ならINF)
    vector<int> dp(100010,INF);
    //初期値の決定
    dp[0]=0;

    //各dpの値をchminを使って決定
    for(int i =1 ;i<n;i++){
        chmin(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
        if(i>1)chmin(dp[i],dp[i-2]+abs(h[i]-h[i-2]));



    }
    cout<<dp[n-1]<<endl;

}