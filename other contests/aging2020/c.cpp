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
    vector<int> ans(100005);
    for(int i =1;i<100;i++){
        for(int j =1;j<100;j++){
            for(int k =1;k<100;k++){
                int sum =i*i+j*j+k*k+i*j+j*k+k*i;
                ans[sum]++;

            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<endl;
    }

}