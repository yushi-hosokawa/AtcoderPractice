#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int x;
    cin >> x;
    int kyu = 8;
    int s = 600;
    int rank = 0;
    while (s <= 2000){
        if (x < s) {
        cout<<kyu<<endl;
        return 0;
        }

        s+=200;
        kyu-=1;
    }

}