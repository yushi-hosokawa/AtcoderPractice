#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
//a より b の方が大きかったら、a の値を b の値に置き換える (そして true を返す) aにdp値、bに比較する値を入れる
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
//a より b の方が小さかったら、a の値を b の値に置き換える (そして true を返す) aにdp値、bに比較する値を入れる
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main(){
    int n,c;cin>>n>>c;
    vector<int> x(n);
    vector<int> v(n);
    rep(i,n){
        cin>>x[i]>>v[i];
    }
    //時計回りのmax
    vector<int> dmax(n);
    vector<int> rmax(n);
    vector<int> dans(n);
    vector<int> rans(n);
    ll count = v[0];
    ll dis = x[0];
    ll rcount = v[n-1];
    ll rdis = x[n-1];
    //max[0]の初期化
    if(v[0]-x[0]>0)dmax[0]=v[0]-x[0];
    else dmax[0] = 0;
    //rmax[0]の初期化
    if(v[n-1]-(c-x[n-1])>0)rmax[0]=v[n-1]-x[n-1];
    else rmax[n-1] = 0;

    //maxに値入れていく
    for(int i = 1;i<n;i++){
        count+=v[i];
        dis=x[i];
        if((count-dis)>dmax[i-1])dmax[i]=count-dis;
        else dmax[i]=dmax[i-1];
    }

    for(int i =n-2;i>=0;--i){
        count+=v[i];
        dis=c-x[i];
        if((count-dis)>rmax[i+1])rmax[i]=count-dis;
        else rmax[i]=rmax[i+1];
    }
    count = 0;
    dis = 0;
    rcount = 0;
    rdis = 0;

    for(int i = 0;i<n-1;i++){
        count+=v[i];
        dis=x[i];
        int ans1 = count-dis;
        int ans2 = count-2*dis+rmax[i+1];
        dans[i] = max(ans1,ans2);
    }
    count +=v[n-1];
    dis = x[n-1];
    dans[n-1]=count-dis;
    count =0;
    dis =0;

    for(int i = n-1;i>0;--i){
        count +=v[i];
        dis =c-x[i];
        int ans1 = count-dis;
        int ans2 =count-2*dis+dmax[i-1];
        rans[i]=max(ans1,ans2);
    }
    count += v[0];
    dis =c-x[0];
    rans[0]=count-dis;
    int finalans = 0;
    rep(i,n){
        finalans=max(finalans,dans[i]);
        finalans = max(finalans,rans[i]);
    }
    cout<<finalans<<endl;

}
