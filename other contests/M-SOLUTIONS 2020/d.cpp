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
    vector<int> a(n);rep(i,n)cin>>a[i];
    ll sum=1000;
    for(int i =0;i<n-1;i++){
        int dif =a[i+1]-a[i];
        if(dif>0){
            ll x = sum/a[i];
            sum+=dif*x;
        }
    }
    cout<<sum<<endl;
}