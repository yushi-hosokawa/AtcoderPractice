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
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n)cin>>x[i]>>y[i];
    vector<int> d ;
    double sum= 0;
    for(int i =0;i<n;i++){
        d.push_back(i);
    }
    double count = 0;
    do{
        count++;
        for(int i = 0;i<d.size()-1;++i){
            sum+=sqrt((x[d[i+1]]-x[d[i]])*(x[d[i+1]]-x[d[i]])+(y[d[i+1]]-y[d[i]])*(y[d[i+1]]-y[d[i]]));
        }

    }while(next_permutation(d.begin(),d.end()));

    double ans = sum/count;
    cout<<setprecision(15)<<ans<<endl;
}