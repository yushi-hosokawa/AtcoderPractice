#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    ll n;cin>>n;
    vector<ll> a(n);
    vector<ll>x;
    sort(a.begin(),a.end());

    x.push_back(a[0]);
    x.push_back(a[1]);
    for(int i = 2;i<n;i++){
        int dif = 0;
        for(int j = 0;j<=x.size();j++){
            if(j==0){
               dif = max(x[0],x[x.size()-1]);
            }
            else {
                dif=max(x[j],x[j-1]);
            }
        }
    }





    rep(i,n){
        cin>>a[i];
    }

}