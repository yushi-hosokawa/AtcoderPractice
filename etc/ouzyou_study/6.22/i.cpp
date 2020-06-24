#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    double n,k;cin>>n>>k;
    double ans =0.0;
    //3パターンで場合分け

    //kが一つ選ばれるとき
    ans += (k-1)*(n-k)*6;
    ans += (n-1)*3;
    ans += 1;

    ans /= pow(n,3);
    cout<<setprecision(15) << ans<<endl;


}
