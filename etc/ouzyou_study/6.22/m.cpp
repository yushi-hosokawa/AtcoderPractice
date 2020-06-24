#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int gwait(bool x){
    int a = 0;
    if(!x){
       a= 1;
    }
    return a;
}
int bwait(bool x){
    int a = 0;
    if(x){
        a=1;
    }
    return a;
}

int main(){
    int n,c;cin>>n>>c;
    vector<int> x(n);
    vector<int> v(n);
    rep(i,n){
        cin>>x[i]>>v[i];
    }
    vector<int> dp(n+10);
    rep(i,n+10){
        dp[i]=-;
    }
    //逆回りがいいか順周りがいいかを確かめる
    dp[0]= 0;
    int num = 0;
    int now =0;
    //nが１の時
    if(n==1){
        if(v[0]>x[0]) {
            cout << v[0] - x[0] << endl;
            return 0;
        }
        else {
            cout<<0<<endl;
            return 0;
        }
    }

    int go = 1;
    int buck = n-1;
    bool go_check =true;
    if((v[go]-x[go])>v[buck]-x[buck]){
        dp[1]=v[go]-x[go];
        num = 1;
        now = x[go];
    }
    else {
        dp[1]=v[buck]-x[buck];
        go_check = false;
        num = n-1;
        now = x[buck];
    }

    for(int i = 0;i<n;i++){
        go =(num+1)%n+gwait;
        buck = (num-1)%+bwait;
        chmin(dp[i],dp[])
    }



}
