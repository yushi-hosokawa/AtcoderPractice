#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    ll n,d;cin>>n>>d;
    vector<ll> x(n);
    vector<ll> y(n);
    rep(i,n){
        cin>>x[i]>>y[i];
    }
    ll count =0;

    rep(i,n){
        double a;
        a = sqrt(x[i]*x[i]+y[i]*y[i]);
        if(a<=d)count++;

    }
    cout<<count<<endl;
}