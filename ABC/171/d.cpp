#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    int n ; cin>>n;
    vector<int> a(n);rep(i,n)cin>>a[i];
    int q;cin>>q;
    vector<int> b(q),c(q);rep(i,q)cin>>b[i]>>c[i];
    vector <int> x (100005);
    ll sum=0;
    rep(i,n){
        x[a[i]]++;
        sum+=a[i];
    }

    for(int i=0;i<q;i++){
        int count = x[b[i]];
        int dif = (c[i]-b[i])*count;
        x[b[i]]=0;
        x[c[i]]+=count;
        sum+=dif;
        cout<<sum<<endl;
    }

}