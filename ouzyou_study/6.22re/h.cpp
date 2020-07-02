#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    double n,k;cin>>n>>k;
    //kが何個含まれるかで場合分け
    double one ,two,three;
    one =(k-1)*(n-k)*6;
    two = (n-1)*3;
    three = 1;
    double ans =0;
    ans =(one+two+three)/(n*n*n);
    cout<<setprecision(15)<<ans<<endl;

}