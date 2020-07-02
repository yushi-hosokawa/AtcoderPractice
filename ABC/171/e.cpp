#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n)cin >> a[i];
    ll xorsum = a[0];
    for (int i = 1; i < n; ++i) {
        xorsum = xorsum ^ a[i];
    }

    vector<ll> ans(n);
    rep(i, n) {
        ans[i] = xorsum ^ a[i];
        cout << ans[i] << " ";
    }
}
