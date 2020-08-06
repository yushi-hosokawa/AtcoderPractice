#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    int n,k;cin>>n>>k;
    vector<int> r(n);rep(i,n)cin>>r[i];
    sort(r.begin(),r.end(),greater<int>());
    multiset<int> ans;
    double sum=0.0;
    rep(i,k){
        ans.insert(r[i]);
    }
    for(auto itr=ans.begin();itr!=ans.end();itr++){
        sum=(sum+*itr)/2.0;
    }
    cout<<setprecision(15)<<sum<<endl;
}