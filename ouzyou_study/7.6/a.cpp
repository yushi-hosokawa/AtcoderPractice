#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    string s;cin>>s;
    int n;cin>>n;
    vector<int> l(n);
    vector<int> r(n);
    rep(i,n)cin>>l[i]>>r[i];
    rep(i,n){
        int len=r[i]-l[i];
        for(int j = 0;j<=len/2;j++){
           // cout<<s[l[i]+j-1]<<"  "<<s[r[i]-j-1]<<endl;
            swap(s[l[i]+j-1],s[r[i]-j-1]);
        }
       // cout<<s<<endl;

    }
    cout<<s<<endl;
}