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
    vector<int> x(n+1),y(n+1);for(int i=1;i<=n;i++)cin>>x[i]>>y[i];
    vector<int> a;
    double sum=0.0;
    double count =0.0;
    rep(i,n)a.push_back(i+1);
    do {
        count += 1.0;
        for (int i = 1; i < n; i++) {
            double len = sqrt((x[a[i-1]] - x[a[i ]]) * (x[a[i-1]] - x[a[i ]]) + (y[a[i-1]] - y[a[i ]]) * (y[a[i-1]] - y[a[i]]));
            sum += len;

        }
    }while (next_permutation(a.begin(), a.end()));
        double ave = sum / count;
        cout << setprecision(15) << ave << endl;



}