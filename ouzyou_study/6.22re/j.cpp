#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    int n;
    cin >> n;
    vector<int> a(n);rep(i,n)cin>>a[i];
    ll sum=n;
    ll count=0;
    rep(i,n-1){
        if(a[i]<a[i+1]){
            count++;
            sum+=count;

        }
        else {
            count=0;
        }
    }
    cout<<sum<<endl;


}