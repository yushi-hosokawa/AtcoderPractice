#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
typedef long long ll;

int main(){
  ll n;
  cin>>n;
  ll p[n];
  rep(i,n) cin >>p[i];
  ll s =p[0];
  ll checker = 0;
  rep(i,n) {
    s = min(s,p[i]);
    //cout<<ans[0]<<endl;
    if(p[i]<=s) ++checker;
  }
  cout<<checker<<endl;
}
//50分
//問題解釈に時間かかりすぎた
//最初一つ一つの要素をソートして一番小さいのやろうとしてTLEくらった。少しは時間も考えなければあかん
