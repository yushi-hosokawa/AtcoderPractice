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
    string y;
    ll i = 0;
    //桁数
    vector<char> x(100);
    while(n>0){
        ll a =(n-1)%26;
        char b ='a'+a;
        i++;
        y+=b;
        n/=26;
    }

    string ans ;
    rep(i,y.size()){
        ans+=y[y.size()-i-1];
    }
    cout<<ans<<endl;

}