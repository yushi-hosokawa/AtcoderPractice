#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    ll n,k;cin>>n>>k;
    ll x =0;
    if(n<k){
        x=n;
    }
    else x =n%k;

    ll y = abs(x-k);
    ll ans =min(x,y);
    cout<<ans<<endl;

}