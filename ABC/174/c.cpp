#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    ll k;cin>>k;
    ll x =7;

    for(int i =1;i<=999982;++i){
        if(x%k==0){
            cout<<i<<endl;
            return 0;
        }
        else x=x%k;
        x*=10;
        x+=7;


    }
    cout<<-1<<endl;
}