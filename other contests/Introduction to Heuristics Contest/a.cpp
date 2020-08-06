#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    ll d ;cin>>d;
    vector<ll> c(26);rep(i,26)cin>>c[i];
    vector<vector<ll>> s(d,vector<ll>(26));
    vector<ll> x(26);
    vector<ll> bai(26); //何倍のcを追加するかのチェック

    ll ans = 0;

    rep(i,d){
        rep(j,26){
            cin>>s[i][j];
        }
    }
    //vector<ll> t(d);rep(i,d)cin>>t[i];

    rep(i,d){
        vector<P> lans(26);


        rep(j,26){
            ll tmpans =ans;
            vector<ll> tmpbai = bai;
            tmpans+=s[i][j];
            tmpbai[j]=i+1;


            rep(k,26){
                tmpans-=c[k]*(i+1-tmpbai[j]);
               // cout<<tmpans<<endl;
            }
            P p(tmpans,j);
            lans[j]=p;

        }
        sort(lans.begin(),lans.end());
        cout<<lans[25].second+1<<endl;
        bai[lans[25].second]=i+1;
        ans =lans[25].first;
    }


}