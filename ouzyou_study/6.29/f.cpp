#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    int n ,a,b;cin>>n>>a>>b;
    vector<int> s(n);rep(i,n)cin>>s[i];
    sort(s.begin(),s.end());
    double def =s[n-1]-s[0];
    if(s[n-1]-s[0]==0){
        cout<<-1<<endl;
        return 0;
    }
    double sum =0;
    rep(i,n)sum+=s[i];
    double p = 0;double q = 0;
    p=b/def;
    q = a-(b*sum/(n*def));
    cout<<setprecision(15)<<p<<" "<<q<<endl;

}