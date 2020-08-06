#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    ll n,m,k; cin>>n>>m>>k;
    vector<ll> a(n);rep(i,n)cin>>a[i];
    vector<ll> b(m);rep(i,m)cin>>b[i];
    ll aw = 0;
    ll bw = 0;
    ll maxw = 0;
    ll maxb = 0;
    ll bb = 0;
    //時間に関係なく全てのbを読んだときの値を入力
    rep(i,m)bw += b[i];

    bb=m;
    for(ll i=0;i<n;i++){
        while((aw+a[i]+bw)>k && bb>0) {
            bw-=b[bb];
            bb-=1;
        }
        if(aw+a[i]>k){
            cout<<0<<endl;
            return 0;
        }
        aw+=a[i];
        maxb=max(maxb,(bb+(i+1)));

    }
    cout<<maxb<<endl;
}