#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int k;cin>>k;
    while(k>0){
        if(a>=b){

            b*=2;
            k-=1;
            continue;
        }
        else if(b>=c){
            c*=2;
            k-=1;
            continue;
        }
        else{
            cout<<"Yes"<<endl;
            return 0;

        }
    }
    if(a<b&&b<c)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}