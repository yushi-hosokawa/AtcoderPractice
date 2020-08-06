#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    int l,r,d;cin>>l>>r>>d;
    int count=0;
    for(int i =1;i<=100;i++){

        if(i>=l&&i<=r&&i%d==0)count++;
    }
    cout<<count<<endl;

}